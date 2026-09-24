using System;
using FAT.Merge;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using fat.rawdata;

namespace FAT
{
	public class UIOutOfEnergy : UIBase
	{
		public Animator uiAnim;

		public GameObject groupStatus;

		public TextMeshProUGUI diamondCount;

		public UIImageRes icon;

		public TextMeshProUGUI desc;

		public TextMeshProUGUI count;

		public UITextState discount;

		public MapButton close;

		public MapButton confirm;

		public GameObject groupAd;

		public TextMeshProUGUI descAd;

		public MapButton confirmAd;

		[NonSerialized]
		public Board board;

		[NonSerialized]
		public bool free;

		[NonSerialized]
		public int claim;

		[NonSerialized]
		public MergeBoardEnergy eConf;

		[NonSerialized]
		public ShopEnergyData item;

		[NonSerialized]
		public bool isConfirmUsed;

		public override void OnCreate()
		{
		}

		public override void OnPreOpen()
		{
		}

		public override void OnPreClose()
		{
		}

		public override void OnPostClose()
		{
		}

		public void UserClose()
		{
		}

		public void OnCoinChange(CoinType t_)
		{
		}

		public void RefreshStatus()
		{
		}

		public void RefreshInfo()
		{
		}

		public void RefreshPrice()
		{
		}

		public void RefreshAd()
		{
		}

		public void ConfirmUsed()
		{
		}

		public void ConfirmClick()
		{
		}

		public void AdClick()
		{
		}

		public void _003C_003EiFixBaseProxy_OnCreate()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreOpen()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreClose()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostClose()
		{
		}
	}
}
