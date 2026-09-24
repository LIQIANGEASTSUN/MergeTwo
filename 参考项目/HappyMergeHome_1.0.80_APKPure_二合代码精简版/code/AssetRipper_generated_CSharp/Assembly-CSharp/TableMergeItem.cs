using System;

[Serializable]
public class TableMergeItem : TableBase
{
	public int id;

	public string name_key;

	public string image;

	public string image_full;

	public float offsetY;

	public int type;

	public int subType;

	public bool showText;

	public string showAnimAsset;

	public int level;

	public int in_line;

	public int airIsland;

	public int[] re_line;

	public int[] reSp_line;

	public bool order_possible;

	public string item_des;

	public int pre_level;

	public int next_level;

	public int sold_gold;

	public int output_lock;

	public bool energy_frenzy;

	public bool is_product_all_cd;

	public float cd_time;

	public int[] outputLimit;

	public int[] outputLimitByTimes;

	public int[] dynamicPowerItem;

	public int dynamicPower;

	public int[] active_cost;

	public int[] produce_cost;

	public bool isIgnoreCd;

	public int[] cdspeed_cost;

	public int[] output_cost;

	public int[] output;

	public int[] power;

	public int output_amount;

	public int max_output_amount;

	public int[] time_cdspeed_cost;

	public int[] timeOutput_cost;

	public int[] timeOutput;

	public int[] timeOutputPower;

	public int time_output_amount;

	public int time_max_output_amount;

	public int[] Max_Drop_Interval;

	public int[] show_power;

	public int onelife;

	public int out_death;

	public int value;

	public int[] bubble_rate;

	public int[] unlcok_power_bubble;

	public int unlcok_cost_bubble;

	public int day_bubble_count;

	public int unlcok_cost_net;

	public int booster_factor;

	public int Gem_split;

	public bool rv_speedup;

	public bool sold_confirm;

	public int rv_speed_count;

	public int original_count;

	public int time_original_count;

	public int[] gallery_award;

	public int price;

	public bool isSpecial;

	public int output_rules_task;

	public bool master_card_undo;

	public int merge_output;

	public int merge_effect_index;

	public int[] output_probability;

	public int[] big_smale_cd;

	public string big_smale_cdspeed;

	public int recovery_item;

	public int[] level_box_produce;

	public bool isBuildingBag;

	public override int GetID()
	{
		return 0;
	}

	public int _003C_003EiFixBaseProxy_GetID()
	{
		return 0;
	}
}
