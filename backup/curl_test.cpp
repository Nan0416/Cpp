#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <curl/curl.h>
static const char *argv[] = {
    "http://www.microsoft.com",
    "http://www.opensource.org",
    "http://www.google.com",
    "http://www.yahoo.com",
    "http://www.ibm.com",
    "http://www.mysql.com",
    "http://www.oracle.com",
    "http://www.ripe.net",
    "http://www.iana.org",
    "http://www.amazon.com",
    "http://www.netcraft.com",
    "http://www.heise.de",
    "http://www.chip.de",
    "http://www.ca.com",
    "http://www.cnet.com",
    "http://www.news.com",
    "http://www.cnn.com",
    "http://www.wikipedia.org",
    "http://www.dell.com",
    "http://www.hp.com",
    "http://www.cert.org",
    "http://www.mit.edu",
    "http://www.nist.gov",
    "http://www.ebay.com",
    "http://www.playstation.com",
    "http://www.uefa.com",
    "http://www.ieee.org",
    "http://www.apple.com",
    "http://www.symantec.com",
    "http://www.zdnet.com",
    "http://www.fujitsu.com",
    "http://www.supermicro.com",
    "http://www.hotmail.com",
    "http://www.ecma.com",
    "http://www.bbc.co.uk",
    "http://news.google.com",
    "http://www.foxnews.com",
    "http://www.msn.com",
    "http://www.wired.com",
    "http://www.sky.com",
    "http://www.usatoday.com",
    "http://www.cbs.com",
    "http://www.nbc.com",
    "http://slashdot.org",
    "http://www.bloglines.com",
    "http://www.techweb.com",
    "http://www.newslink.org",
    "http://www.un.org",
};

static size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream)
{
    size_t written = fwrite(ptr, size, nmemb, (FILE *)stream);
    return written;
}

int main(int argc, char *argv[])
{
    char url[]="http://finance.sina.com.cn/forex/paijia.html?from=wap#1";
    char url2[]="http://www.abchina.com/cn/publicPlate/Quotation/whhq/200911/t20091125_14291.htm";
    CURL *curl_handle;
    static const char *pagefilename = "page.html";
    FILE *pagefile;
    
  //  if(argc < 2 ) {
      //  printf("Usage: %s <URL>\n", argv[0]);
        //return 1;
    //}
    
    curl_global_init(CURL_GLOBAL_ALL);
    
    /* init the curl session */
    curl_handle = curl_easy_init();
    
    /* set URL to get here */
    curl_easy_setopt(curl_handle, CURLOPT_URL, url2);
    
    /* Switch on full protocol/debug output while testing */
    curl_easy_setopt(curl_handle, CURLOPT_VERBOSE, 1L);
    
    /* disable progress meter, set to 0L to enable and disable debug output */
    curl_easy_setopt(curl_handle, CURLOPT_NOPROGRESS, 1L);
    
    /* send all data to this function  */
    curl_easy_setopt(curl_handle, CURLOPT_WRITEFUNCTION, write_data);
    
    /* open the file */
    pagefile = fopen(pagefilename, "wb");
    if (pagefile) {
        
        /* write the page body to this file handle */
        curl_easy_setopt(curl_handle, CURLOPT_WRITEDATA, pagefile);
        
        /* get it! */
        curl_easy_perform(curl_handle);
        
        /* close the header file */
        fclose(pagefile);
    }
    
    /* cleanup curl stuff */
    curl_easy_cleanup(curl_handle);
    
    return 0;
}