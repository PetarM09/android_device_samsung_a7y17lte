#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_A720F = 0,
    VARIANT_A720S,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant international_models = {
    .model = "SM-A720F",
    .codename = "a7y17lte"
};

static const variant korea_telecom_models = {
    .model = "SM-A720S",
    .codename = "a7y17lteskt"
};

static const variant *all_variants[VARIANT_MAX] = {
    &international_models,
    &korea_telecom_models
};


#endif // INIT_SEC_H
