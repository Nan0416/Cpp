#include <iostream>
#include <fmt/format.h>
#include <spdlog/spdlog.h>
#include <nlohmann/json.hpp>
#include <cpprest/http_listener.h>
#include <cpprest/json.h>

// Use explicit namespace to avoid conflicts
namespace json_lib = nlohmann;
using namespace web;
using namespace web::http;
using namespace web::http::experimental::listener;

int main() {
    // Modern C++ string formatting with fmt
    std::string name = "C++ Developer";
    std::string formatted_msg = fmt::format("Welcome back, {}! 🚀", name);
    
    // Modern logging with spdlog
    spdlog::info("Starting C++ demo application");
    spdlog::info(formatted_msg);
    
    // JSON handling with nlohmann/json
    json_lib::json config = {
        {"app_name", "C++ Demo"},
        {"version", "1.0.0"},
        {"features", {"vcpkg", "cmake", "modern_cpp"}},
        {"year_learned", 2014},  // 10 years ago
        {"year_revisited", 2024}
    };
    
    spdlog::info("Configuration loaded:");
    std::cout << config.dump(2) << std::endl;
    
    // Demonstrate some modern C++ features
    auto calculate_years_gap = [](int old_year, int new_year) {
        return new_year - old_year;
    };
    
    int gap = calculate_years_gap(config["year_learned"], config["year_revisited"]);
    spdlog::info("You're revisiting C++ after {} years!", gap);
    
    // Show off some C++17 features
    if (auto it = config.find("features"); it != config.end()) {
        spdlog::info("Available features:");
        for (const auto& feature : *it) {
            std::cout << fmt::format("  - {}", feature.get<std::string>()) << std::endl;
        }
    }
    
    spdlog::info("Demo completed successfully! 🎉");
    
    return 0;
}