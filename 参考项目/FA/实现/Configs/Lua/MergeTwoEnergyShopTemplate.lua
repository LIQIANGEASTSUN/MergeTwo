local config = [====[{
"32001":{"id":"32001","currency_shop_id":"1017","currency_shop_num":"100","currency_shop_value":[20,40,80,100]}
}]====]
return table.deserialize(config)