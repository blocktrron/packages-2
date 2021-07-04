#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <json-c/json.h>

struct airtime_data {
	struct json_object *parent_json;

	int ifx;
	int wiphy;
}

__attribute__((visibility("hidden"))) bool get_airtime(struct airtime_data *data);
