// Copyright 2022 flagarde

#ifndef KHAOS_UTILITYMACROS_H_
#define KHAOS_UTILITYMACROS_H_

#include "khaos/KhaosVersion.h"

#define KHAOS_STRINGIFY(s) #s

#define KHAOS_EXPANDED_STRINGIFY(s) KHAOS_STRINGIFY(s)

#define KHAOS_CONCATENATE(a, b) a##b

#define KHAOS_EXPANDED_CONCATENATE(a, b) KHAOS_CONCATENATE(a, b)

#define 55

#endif  // KHAOS_UTILITYMACROS_H_
