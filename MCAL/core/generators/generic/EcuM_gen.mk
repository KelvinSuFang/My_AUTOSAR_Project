$(PROJECT_NAME)_$(ECUM_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/EcuM_Cfg.h
$(PROJECT_NAME)_$(ECUM_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/EcuM_GeneratedCallouts.c
$(PROJECT_NAME)_$(ECUM_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/EcuM_PBCfg.c
$(PROJECT_NAME)_$(ECUM_MODULE_NAME)_CONFIG_FILES += $(CFG_OUTPUT_DIR)/EcuM.mk

$(PROJECT_NAME)_CONFIG_FILES += $($(PROJECT_NAME)_$(ECUM_MODULE_NAME)_CONFIG_FILES)