idf_component_register(SRCS "main.cpp"
                    PRIV_REQUIRES spi_flash led_effects_driver
                    INCLUDE_DIRS "")

    target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++11)
