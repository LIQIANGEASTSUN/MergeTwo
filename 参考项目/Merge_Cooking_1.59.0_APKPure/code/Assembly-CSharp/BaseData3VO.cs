using System;
using System.Collections.Generic;
using TLF;
using UnityEngine;

[Serializable]
public class BaseData3VO
{
	public int type;

	public int id;

	public int num;

	public static BaseData3VO Clone(BaseData3VO vo)
	{
		return new BaseData3VO
		{
			type = vo.type,
			id = vo.id,
			num = vo.num
		};
	}

	public static string List2string(List<BaseData3VO> list)
	{
		string text = "";
		for (int i = 0; i < list.Count; i++)
		{
			text = ((text.Length <= 0) ? list[i].type.ToString() : (text + "뺧" + list[i].type));
			text = text + "뻠" + list[i].id;
			text = text + "뻠" + list[i].num;
		}
		return text;
	}

	public static List<BaseData3VO> GetBaseData3VOList(string s)
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		if (s.IsNullOrEmpty())
		{
			return list;
		}
		string[] array = s.Split(';');
		if (array != null && array.Length != 0)
		{
			for (int i = 0; i < array.Length; i++)
			{
				string[] array2 = array[i].Split('|');
				if (array2.Length == 3)
				{
					try
					{
						list.Add(new BaseData3VO
						{
							type = Convert.ToInt32(array2[0]),
							id = Convert.ToInt32(array2[1]),
							num = Convert.ToInt32(array2[2])
						});
					}
					catch (Exception)
					{
						Log.E("싘끂溣᥈氙\u001f뾾욽䤋뀀䒛愌\uef477\u0016匕숼끛\uf7ea嘽瑻~엤⣣쭇根澝");
					}
				}
			}
		}
		return list;
	}

	public static List<BaseData3VO> GetBaseData3VOListConvert(string s, bool isCCActive)
	{
		List<BaseData3VO> list = new List<BaseData3VO>();
		if (s.IsNullOrEmpty())
		{
			return list;
		}
		string[] array = s.Split(';');
		if (array != null && array.Length != 0)
		{
			for (int i = 0; i < array.Length; i++)
			{
				string[] array2 = array[i].Split('|');
				if (array2.Length == 3)
				{
					try
					{
						BaseData3VO reward = new BaseData3VO
						{
							type = Convert.ToInt32(array2[0]),
							id = Convert.ToInt32(array2[1]),
							num = Convert.ToInt32(array2[2])
						};
						reward = CardCollectionConfigHelper.GetCardPackConvertReward(reward, isCCActive);
						list.Add(reward);
					}
					catch (Exception)
					{
						Log.E("싘끂溣᥈氙\u001f뾾욽䤋뀀䒛愌\uef477\u0016匕숼끛\uf7ea嘽瑻~엤⣣쭇根澝");
					}
				}
			}
		}
		return list;
	}

	public static List<List<BaseData3VO>> GetBaseData3VOListList(string s, char split = '#')
	{
		List<List<BaseData3VO>> list = new List<List<BaseData3VO>>();
		string[] array = s.Split(split);
		for (int i = 0; i < array.Length; i++)
		{
			if (!array[i].IsNullOrEmpty())
			{
				list.Add(GetBaseData3VOList(array[i]));
			}
		}
		return list;
	}

	public static List<List<BaseData3VO>> GetBaseData3VOListListConvert(string s, bool isCCActive, char split = '#')
	{
		List<List<BaseData3VO>> list = new List<List<BaseData3VO>>();
		string[] array = s.Split(split);
		for (int i = 0; i < array.Length; i++)
		{
			if (!array[i].IsNullOrEmpty())
			{
				list.Add(GetBaseData3VOListConvert(array[i], isCCActive));
			}
		}
		return list;
	}

	public string Icon(int uiType = 1)
	{
		string result = "";
		if (type == 1)
		{
			IItemVO item = StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(id);
			if (item != null)
			{
				result = item.icon;
				if (item.id == 1060)
				{
					result = ObjectManager.GetInstance().independentMiningModel.GetTokenIcon();
				}
				else if (item.id == 1062)
				{
					result = ObjectManager.GetInstance().independentFarmModel.GetTokenIcon();
				}
				else if (item.id == 1056)
				{
					result = ObjectManager.GetInstance().raceVsModel.GetTokenIconName();
				}
				else if (item.id == 1067)
				{
					result = ObjectManager.GetInstance().BoostRaceTaskChainModel.GetTokenIcon();
				}
				else if (item.id == 1072)
				{
					result = ObjectManager.GetInstance().race1v1CodeModel.GetTokenIconName();
				}
				else if (item.id == 1070)
				{
					result = ObjectManager.GetInstance().taskSevenDayModel.GetStarBoxStarRewardIcon();
				}
			}
			if (uiType == 2 && id == 1001)
			{
				result = "숉끓涆漊畛?º厹숒끥溼攓湄\r¾厽뻫";
			}
		}
		else
		{
			if (type == 1051)
			{
				return TaskChain.Token.GetCurrentToken().Icon;
			}
			if (type.IsGoods())
			{
				IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
				if (goodsBaseVoById != null)
				{
					result = goodsBaseVoById.GetIcon();
				}
			}
			else if (type == 3)
			{
				if (id == 1)
				{
					result = "숉끓涆漊畛?º厹숏끥犫搐湃3Î反医橩ā讽魮";
				}
				else if (id == 13)
				{
					result = "숉끓涆漊畛?º厹숏끥犫搐湃3Î反숍끘榸洎彫>ª厩摩t4끩e\ude3d㳆";
				}
				else if (id == 2)
				{
					result = MonoSingleton<TaskPassConfig>.Instance.IconName;
					if (ObjectManager.GetInstance().taskPassModelV2.TaskPassOpenState)
					{
						result = MonoSingleton<TaskPassV2Config>.Instance.IconName;
					}
					if (ObjectManager.GetInstance().taskPassModel.TaskPassUIType == 1)
					{
						result = "숉끓涆漊畛?º厹숋끥炭愌湇9Æ叅숙끉犆攚獗=Î反刖梃\ud9f7Ń";
					}
					else if (ObjectManager.GetInstance().taskThemePassModel.TaskPassOpenState)
					{
						result = ObjectManager.GetInstance().taskThemePassModel.CurScoreIcon;
					}
					else if (ObjectManager.GetInstance().taskThemePassModelV2.TaskPassOpenState)
					{
						result = ObjectManager.GetInstance().taskThemePassModelV2.CurScoreIcon;
					}
				}
				else if (id == 4)
				{
					IUserHeadVo headByTypeAndID = ObjectManager.GetInstance().userHeadModel.GetHeadByTypeAndID(UserHeadType.Head, num);
					if (headByTypeAndID != null)
					{
						result = ((!CardCollection.IsCardCollectionHead(headByTypeAndID.id)) ? headByTypeAndID.PicName : CardCollection.GetCardCollectionHeadResName((CardCollection.EHeadId)headByTypeAndID.id));
					}
				}
				else if (id == 5)
				{
					IUserHeadVo headByTypeAndID2 = ObjectManager.GetInstance().userHeadModel.GetHeadByTypeAndID(UserHeadType.Frame, num);
					if (headByTypeAndID2 != null)
					{
						result = ((!CardCollection.IsCardCollectionHead(headByTypeAndID2.id)) ? headByTypeAndID2.PicName : CardCollection.GetCardCollectionHeadResName((CardCollection.EHeadId)headByTypeAndID2.id));
					}
				}
				else if (id == 20)
				{
					result = string.Format("숞끌徸期慕 \u0082厁숚끕ガ紛牫)Å叄", num);
				}
				else if (id == 6)
				{
					result = "숉끓涆漊畛?º厹숃끥涫愄湗:º厹숏끥沴弐湐3¶厵列槯\ud9caŒ";
				}
				else if (id == 7)
				{
					result = "숉끓涆漊畛?º厹숃끥涫愄湗:º厹숃끥徽戄湗7\u0082厁곣£赴";
				}
				else if (id == 8)
				{
					result = "숉끓涆漊畛?º厹숃끥涫愄湗:º厹숃끥抽甄湗7\u008e厍渶䅾";
				}
				else if (id == 9)
				{
					result = "숉끓涆漊畛?º厹숋끥澻漌湘>Â叁숋끥徽戌湆&\u0082厁곣£赴";
				}
				else if (id == 10)
				{
					result = "숉끓涆漊畛?º厹숃끥涫愄湗:º厹숏끥沴弐湐3¶厵列槯\ud9caŒ";
				}
				else if (id == 11)
				{
					result = "숉끓涆漊畛?º厹숋끥澻漌湘>Â叁숋끥徽戌湆&\u0082厁곣£赴";
				}
				else if (id == 12)
				{
					result = "숉끓涆漊畛?º厹숋끥澻漌湘>Â叁숋끥瞾愌湀7â叡뻥";
				}
				else if (id == 14)
				{
					result = "숉끓涆漊畛?º厹숆끥殺弇湛1²厱\uabe5\u00af赴";
				}
				else if (id == 15)
				{
					result = ObjectManager.GetInstance().sceneActivityModel.GetCurActivityScoreBuffName;
				}
				else if (id == 16)
				{
					result = ObjectManager.GetInstance().sceneActivityModel.GetCurActivityScoreName;
				}
				else if (id == 17)
				{
					result = "숙끓溆攚畗7¾厽숃끙璭礄慂;Ö叕숆끞璼椇录+Ö叕녭履〼\0逞\ud97a";
				}
				else if (id == 18)
				{
					result = "숉끓撆挊畕 \u0096厕숏끖榵漐潗&ª厩扮_4끴c쬿㫘";
				}
				else if (id == 21)
				{
					result = "숏끓犆朐畚7Î反숅끥掻氆祌\r\u0092厑녯䍳త\0郣\ud926";
				}
				else if (id == 22)
				{
					result = "숅끓斆爆畆6\u009a厙숞끛涫洟灗=º厹숈끎暆弉楁4\u009e厝删犷\ud9c1Ś";
				}
			}
			else if (type == 9)
			{
				IIndependentGoodsBaseVo goodsConfigById = ObjectManager.GetInstance().independentMergeModel.GetGoodsConfigById(id);
				if (goodsConfigById != null)
				{
					result = goodsConfigById.GetIcon();
				}
			}
			else if (type == 10 || type == 12)
			{
				ICardPackBaseConfig cardPackConfigById = CardCollectionConfigHelper.GetCardPackConfigById(id);
				if (cardPackConfigById != null)
				{
					if (CardCollection.IsLimitedCardPack(id))
					{
						string themeUISuffix = ObjectManager.GetInstance().limitTimeCardCollectionModel.GetThemeUISuffix();
						result = cardPackConfigById.iconName + themeUISuffix;
					}
					else
					{
						result = cardPackConfigById.iconName;
					}
				}
				else if (id == 102)
				{
					result = "숉끓撆挊畕 \u0096厕숏끖榵漐潗&ª厩숉끥徰挊湛<\u0082厁숚끈殽弛慕1²厱숎끕徵眏村<\u0082厁냥\u008b赴";
				}
				else if (id == 101)
				{
					result = "숉끓撆挊畕 \u0096厕숏끖榵漐潗&ª厩숉끥徰挊湛<\u0082厁숚끈殽弛慕1²厱숇끕徫眈湕>\u0082厁녩䍬ద\0郢\ud925";
				}
				else if (id == 103)
				{
					result = "숃끓溆弄畗=¾厽숎끛暫琏捓;\u009e厝숌뀋掶愍彚\r\u0092厑娢䵼";
				}
			}
			else if (type == 11)
			{
				IIndependentGoodsBaseVo goodsConfigById2 = ObjectManager.GetInstance().mergeFishingGameModel.GetGoodsConfigById(id);
				if (goodsConfigById2 != null)
				{
					result = goodsConfigById2.GetIcon();
				}
			}
			else if (type == 13)
			{
				IIndependentGoodsBaseVo goodsConfigById3 = ObjectManager.GetInstance().mergeFishingV2GameModel.GetGoodsConfigById(id);
				if (goodsConfigById3 != null)
				{
					result = goodsConfigById3.GetIcon();
				}
			}
			else if (type == 15)
			{
				IIndependentGoodsBaseVo goodsConfigById4 = ObjectManager.GetInstance().independentStageMergeModel.GetGoodsConfigById(id);
				if (goodsConfigById4 != null)
				{
					result = goodsConfigById4.GetIcon();
				}
			}
			else if (type == 16)
			{
				IIndependentGoodsBaseVo goodsConfigById5 = ObjectManager.GetInstance().independentBasicModel.GetGoodsConfigById(id);
				if (goodsConfigById5 != null)
				{
					result = goodsConfigById5.GetIcon(IndependentType.Independent_Basic);
				}
			}
			else if (type == 17)
			{
				IIndependentGoodsBaseVo goodsConfigById6 = ObjectManager.GetInstance().idnStageBasicModel.GetGoodsConfigById(id);
				if (goodsConfigById6 != null)
				{
					result = goodsConfigById6.GetIcon();
				}
			}
			else if (type == 22)
			{
				IIndependentGoodsBaseVo goodsConfigById7 = ObjectManager.GetInstance().idnStageModel.GetGoodsConfigById(id);
				if (goodsConfigById7 != null)
				{
					result = goodsConfigById7.GetIcon();
				}
			}
			else if (type == 19)
			{
				IIndependentGoodsBaseVo goodsConfigById8 = ObjectManager.GetInstance().independentFarmModel.GetGoodsConfigById(id);
				if (goodsConfigById8 != null)
				{
					result = goodsConfigById8.GetIcon();
				}
			}
		}
		return result;
	}

	public float Scale(int uiType = 1)
	{
		float result = 0.6f;
		if (type == 1)
		{
			if (id == 1002)
			{
				result = 0.2f;
			}
			else if (id == 1001)
			{
				result = 1f;
			}
			else if (id == 1003)
			{
				result = 0.2f;
			}
			else if (id == 1004)
			{
				result = 0.2f;
			}
			else if (id == 1032)
			{
				result = 0.2f;
			}
			else if (id == 1007)
			{
				result = 0.5f;
			}
			else if (id == 1008)
			{
				result = 1f;
			}
			else if (id == 1070)
			{
				result = 1f;
			}
			else if (id == 1023)
			{
				result = 0.8f;
			}
			else if (id == 1024 || id == 1029 || id == 1031)
			{
				result = 0.8f;
			}
			else if (id == 1025)
			{
				result = 0.55f;
			}
			else if (id == 1028)
			{
				result = 0.5f;
			}
			else if (id == 1042)
			{
				result = 0.25f;
			}
			else if (id == 1043)
			{
				result = 0.4f;
			}
			else if (id == 1038)
			{
				result = 0.5f;
			}
			else if (id == 1045 || id == 1076)
			{
				result = 0.4f;
			}
			else if (id == 1049)
			{
				result = 0.4f;
			}
			else if (id == 1048)
			{
				result = 0.4f;
			}
			else if (id == 1055)
			{
				result = 0.47f;
			}
			else if (id == 1056)
			{
				result = 0.4f;
			}
			else if (id == 1057)
			{
				result = 0.2f;
			}
			else if (id == 1063)
			{
				result = 0.22f;
			}
			else if (id == 1064)
			{
				result = 0.27f;
			}
			else if (id == 1067)
			{
				result = 0.27f;
			}
			else if (id == 1068)
			{
				result = 1f;
			}
			else if (id == 1072)
			{
				result = 0.7f;
			}
			if (uiType == 2 && id == 1001)
			{
				result = 0.7f;
			}
		}
		else if (type.IsGoods())
		{
			result = 0.6f;
		}
		else if (type == 3)
		{
			if (id == 1)
			{
				result = 0.6f;
			}
			else if (id == 4 || id == 5)
			{
				result = ((!CardCollection.IsCardCollectionHead(num)) ? 0.6f : 0.52f);
			}
			else if (id == 8)
			{
				result = 0.6f;
			}
			else if (id == 14)
			{
				result = 1.29f;
			}
			else if (id == 15)
			{
				result = 0.9f;
			}
			else if (id == 16)
			{
				result = 0.6f * ObjectManager.GetInstance().sceneActivityModel.GetScoreIconScale;
			}
			else if (id == 17)
			{
				result = 0.45f;
			}
			else if (id == 18)
			{
				result = 0.45f;
			}
			else if (id == 20)
			{
				result = 0.56f;
			}
			else if (id == 22)
			{
				result = 0.778f;
			}
		}
		else if (type == 9)
		{
			result = 0.6f;
		}
		else if (type == 10 || type == 12)
		{
			result = 0.6f;
			if (CardCollection.IsNormalWild(id))
			{
				result = 0.5f;
			}
			else if (CardCollection.IsRandomCard(id))
			{
				result = 0.4f;
			}
		}
		else if (type == 15)
		{
			result = 0.6f;
		}
		else if (type == 16)
		{
			result = 0.6f;
		}
		else if (type == 17)
		{
			result = 0.6f;
		}
		else if (type == 22)
		{
			result = 0.6f;
		}
		return result;
	}

	public string Name()
	{
		string result = "";
		if (type == 1)
		{
			IItemVO item = StaticDataBase<StaticDataManager>.GetInstance().ItemMap.GetItem(id);
			if (item != null)
			{
				result = item.name;
			}
		}
		else if (type.IsGoods())
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
			if (goodsBaseVoById != null)
			{
				result = goodsBaseVoById.name;
			}
		}
		else if (type == 10 || type == 12)
		{
			ICardPackBaseConfig cardPackConfigById = CardCollectionConfigHelper.GetCardPackConfigById(id);
			if (cardPackConfigById != null)
			{
				if (CardCollection.IsLimitedCardPack(id))
				{
					string themeUISuffix = ObjectManager.GetInstance().limitTimeCardCollectionModel.GetThemeUISuffix();
					result = cardPackConfigById.packName + themeUISuffix;
				}
				else
				{
					result = cardPackConfigById.packName;
				}
			}
		}
		else if (type == 3 && id == 20)
		{
			result = "숎끟澸甏桳 Â叁ꤘG赴";
		}
		return result;
	}

	public bool IsCanShowBtnTips()
	{
		if (type == 1)
		{
			if (id == 1007)
			{
				return true;
			}
		}
		else
		{
			if (type.IsGoods())
			{
				if (IsRandomItemBoxGoods())
				{
					return false;
				}
				return true;
			}
			if (type == 3)
			{
				if (id == 1)
				{
					return true;
				}
				if (id == 13)
				{
					return true;
				}
				if (id == 15)
				{
					return true;
				}
				if (id == 22)
				{
					return true;
				}
			}
			else
			{
				if (type == 10 || type == 12)
				{
					if (CardCollection.IsRandomCard(id))
					{
						return false;
					}
					return true;
				}
				if (type == 11)
				{
					return true;
				}
				if (type == 13)
				{
					return true;
				}
			}
		}
		return false;
	}

	public bool CanAddItemInfoBtn()
	{
		if (type == 2)
		{
			return Singleton<GameLevelManager>.Instance.IsShowProbGoods(id);
		}
		if (type == 10 || type == 12)
		{
			return CardCollection.IsCardPack(id);
		}
		return false;
	}

	public bool IsCanShowTips()
	{
		if (type == 1)
		{
			if (id == 1007)
			{
				return true;
			}
		}
		else
		{
			if (type.IsGoods())
			{
				return true;
			}
			if (type == 3)
			{
				if (id == 1)
				{
					return true;
				}
				if (id == 13)
				{
					return true;
				}
				if (id == 15)
				{
					return true;
				}
				if (id == 22)
				{
					return true;
				}
			}
			else
			{
				if (type == 10 || type == 12)
				{
					if (CardCollection.IsRandomCard(id))
					{
						return false;
					}
					return true;
				}
				if (type == 11)
				{
					return true;
				}
				if (type == 13)
				{
					return true;
				}
			}
		}
		return false;
	}

	public void ShowTipsView(Transform goodsObj = null)
	{
		if (type == 1)
		{
			if (id == 1007)
			{
				Singleton<GameLevelManager>.Instance.ShowItemDetails(id);
			}
		}
		else if (type.IsGoods())
		{
			if (IsRandomItemBoxGoods())
			{
				if ((Object)(object)goodsObj != (Object)null)
				{
					Singleton<GameLevelManager>.Instance.ShowGoodsDetails(id, playAnim: true, analytic: true, goodsObj);
				}
			}
			else
			{
				Singleton<GameLevelManager>.Instance.ShowGoodsDetails(id);
			}
		}
		else if (type == 3)
		{
			if (id == 1)
			{
				GameItemDetailsViewData data = new GameItemDetailsViewData
				{
					showItem = new BaseData3VO
					{
						type = 3,
						id = 1
					}
				};
				ViewManager.GetInstance().ShowView<GameItemDetailsViewLogic>(data, ViewManager.ViewLayer.POP, animate: true);
			}
			else if (id == 13)
			{
				GameItemDetailsViewData data2 = new GameItemDetailsViewData
				{
					showItem = new BaseData3VO
					{
						type = 3,
						id = 13
					}
				};
				ViewManager.GetInstance().ShowView<GameItemDetailsViewLogic>(data2, ViewManager.ViewLayer.POP, animate: true);
			}
			else if (id == 15)
			{
				int num = this.num / 3600;
				string uIValueByKey = LocalizedLang.GetUIValueByKey("숄끙皼攅卑\u0017Þ叝숵끎瓨收湱*Ö叕숋끞復䐌湗9\u0082厁匡橳ā诀鬲", new List<string> { num.ToString() });
				CommonBubbleTipViewData data3 = new CommonBubbleTipViewData
				{
					Tip = uIValueByKey,
					NodeTransform = goodsObj
				};
				ViewManager.GetInstance().ShowView<CommonBubbleTipViewLogic>(data3, ViewManager.ViewLayer.POP);
			}
			else if (id == 22)
			{
				ViewManager.GetInstance().ShowView<OrderPartCommitBuffDetailLogic>(new OrderPartCommitBuffDetailData
				{
					NodeTransform = goodsObj
				}, ViewManager.ViewLayer.POP);
			}
		}
		else if (type == 10 || type == 12)
		{
			if (CardCollection.IsWild(id))
			{
				WildCardBubbleTipViewData data4 = new WildCardBubbleTipViewData
				{
					closeDelay = 3f,
					Tip = "숝끙撆䌞捝>\u0096厕숵끈沽瀶慜7¶厵医橤ā词鴲",
					TiTile = "숝끙撆䌞捝>\u0096厕숵끈璽氶慀;Ö叕뻹",
					NodeTransform = goodsObj
				};
				ViewManager.GetInstance().ShowView<WildCardBubbleTipAniViewLogic>(data4, ViewManager.ViewLayer.POP);
			}
			else if (CardCollection.IsLimitedCardPack(id))
			{
				ObjectManager.GetInstance().limitTimeCardCollectionModel.OpenLimitedInfoView(this);
			}
			else if (CardCollection.IsCardPack(id))
			{
				CardCollectionCardPackTipsViewLogic.Show(this);
			}
		}
		else if (type == 11)
		{
			MergeFishingFishRodTipsViewLogic.Show(this);
		}
		else if (type == 13)
		{
			MergeFishingV2FishRodTipsViewLogic.Show(this);
		}
	}

	public string RewardNumStr(int showNum)
	{
		if (type != 1)
		{
			return "뻤" + showNum;
		}
		return showNum.ToString();
	}

	public string ToNormalRewardStr()
	{
		return string.Format("숖뀊綤簗筏cú叹ꋞò赴", type, id, num);
	}

	public bool IsOnlyShowNum()
	{
		return type == 1;
	}

	public bool IsRandomItemBoxGoods()
	{
		if (type.IsGoods())
		{
			IGoodsBaseVo goodsBaseVoById = Singleton<GameLevelManager>.Instance.GetGoodsBaseVoById(id);
			if (goodsBaseVoById != null && goodsBaseVoById.type == 17)
			{
				return true;
			}
		}
		return false;
	}

	public bool CanFlyToPlayBtn()
	{
		if (type == 1)
		{
			if (id == 1007)
			{
				return true;
			}
		}
		else if (type.IsGoods())
		{
			return true;
		}
		return false;
	}

	public bool CanFlyToTop()
	{
		if (id == 1002 || id == 1003 || id == 1004)
		{
			return true;
		}
		return false;
	}

	public bool IsGoods_dog()
	{
		if (type.IsGoods())
		{
			return id == 601001;
		}
		return false;
	}
}
