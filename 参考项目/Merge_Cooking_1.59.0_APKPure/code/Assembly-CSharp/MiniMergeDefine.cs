using System;
using System.Collections.Generic;
using TLF;

public static class MiniMergeDefine
{
	public static MiniMergeGoodsBase GetMiniMergeGameBaseById(MiniMergeType type, int id, MiniMergeGrid grid, MiniMergeGameGoodsVo initialVo = null)
	{
		IMiniMergeGoodsBaseVo goodsConfigById = GetGoodsConfigById(type, id);
		if (goodsConfigById == null)
		{
			return null;
		}
		MiniMergeGoodsBase miniMergeGoodsBase = null;
		MiniMergeGameGoodsVo miniMergeGameGoodsVo = initialVo;
		if (miniMergeGameGoodsVo == null)
		{
			miniMergeGameGoodsVo = new MiniMergeGameGoodsVo();
			miniMergeGameGoodsVo.goodsID = goodsConfigById.goodsID;
			miniMergeGameGoodsVo.GoodsState = MiniMergeGoodsState.Normal;
		}
		if (goodsConfigById.type == 1)
		{
			miniMergeGoodsBase = new MiniMergeGoodsNormal(miniMergeGameGoodsVo, grid);
		}
		if (miniMergeGoodsBase == null)
		{
			miniMergeGoodsBase = new MiniMergeGoodsNormal(miniMergeGameGoodsVo, grid);
		}
		return miniMergeGoodsBase;
	}

	public static void ShowMergeLevelView(MiniMergeType type, int stageID, Action successCallback = null)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			string viewName = StoryVideo.ViewName.GetViewName(StoryVideo.EThemeId.Default, StoryVideo.EViewId.LevelView);
			if (!viewName.IsNullOrEmpty())
			{
				ViewManager.GetInstance().ShowView(viewName, new MiniMergeViewBaseData
				{
					stageID = stageID,
					SuccessCallback = successCallback
				}, ViewManager.ViewLayer.POP, animate: true);
			}
		}
	}

	public static Dictionary<int, MiniMergeGameGoodsVo> GetMiniMergeMap(MiniMergeType type, int stageID)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetMiniMergeMap(stageID);
		}
		return null;
	}

	public static Dictionary<int, IMiniMergeInitVo> GetMiniMergeLockMap(MiniMergeType type, int stageID)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetMiniMergeLockMap(stageID);
		}
		return null;
	}

	public static IMiniMergeInitVo GetMergeInitVoByID(MiniMergeType type, int stageID, int gridID)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetMergeInitVoByID(stageID, gridID);
		}
		return null;
	}

	public static IMiniMergeGoodsBaseVo GetGoodsConfigById(MiniMergeType type, int id)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetGoodsBaseVo(id);
		}
		return null;
	}

	public static IMiniMergeGoodsBaseVo GetGoodsConfigBySeriesAndLevel(MiniMergeType type, int series, int level)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetGoodsConfigBySeriesAndLevel(series, level);
		}
		return null;
	}

	public static List<IMiniMergeGoodsBaseVo> GetGoodsConfigBySeries(MiniMergeType type, int series)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetGoodsConfigBySeries(series);
		}
		return null;
	}

	public static IMiniMergeGoodsBaseVo GetNextGoodsConfig(MiniMergeType type, MiniMergeGameGoodsVo vo1, MiniMergeGameGoodsVo vo2)
	{
		if (vo1 == null || vo2 == null)
		{
			return null;
		}
		if (vo1.goodsID != vo2.goodsID)
		{
			return null;
		}
		if (IMiniMergeGoodsBaseVo.CannotMerge(vo1.GoodsState) || IMiniMergeGoodsBaseVo.CannotMerge(vo2.GoodsState))
		{
			return null;
		}
		IMiniMergeGoodsBaseVo goodsConfigById = GetGoodsConfigById(type, vo1.goodsID);
		if (goodsConfigById == null)
		{
			return null;
		}
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return GetGoodsConfigBySeriesAndLevel(type, goodsConfigById.series, goodsConfigById.level + 1);
		}
		return null;
	}

	public static IMiniMergeStageVo GetMiniMergeStageVo(MiniMergeType type, int stageID)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			return StoryVideo.ConfigHelper.GetStageVo(stageID);
		}
		return null;
	}

	public static string GetGridBgName(MiniMergeType _independentType, int bgType)
	{
		string result = ((bgType == 0) ? "숍끓斆弎畕?\u009a厙숎끈枰式杫0¢厡뺭" : "숍끓斆弎畕?\u009a厙숎끈枰式杫0¢厡뺮");
		if (_independentType == MiniMergeType.MergeMini_Cold)
		{
			result = ((bgType == 0) ? "숙끓犆礚畀=Î反숏끓涽攐癛\rº厹숵끝榼搶牓 ª厩焍㡉" : "숙끓犆礚畀=Î反숏끓涽攐癛\rº厹숵끝榼搶牓 ª厩焍㡊");
		}
		return result;
	}

	public static string GetMergeTriggerName(MiniMergeType _independentType)
	{
		string result = "숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽扣h4끦c팍㪙";
		if (_independentType == MiniMergeType.MergeMini_Cold)
		{
			result = "숏끜徿唐䕗&\u0082厁숅끩嚭椆䥆+^卝숼끟瞶弽摝7â叡숍끟斷渎桗:\u009a厙녧卣☾\0逑\ud964";
		}
		return result;
	}

	public static string GetMergeFeedback(MiniMergeType _independentType)
	{
		string result = "숏끜徿栐敗&\u0082厁숉끔溾朊敜7¾厽焍㡉";
		if (_independentType == MiniMergeType.MergeMini_Cold)
		{
			result = "숏끜徿唐䕗&\u0082厁숅끩嚭椆䥆+^卝숼끟瞶弽摝7â叡숎끕榵瀏䍫#ª厩숉끔徰昊慛<\u0082厁匥橮ā试鍩";
		}
		return result;
	}

	public static void MergeAnalytic(MiniMergeType type, string action, string step)
	{
		if (type == MiniMergeType.MergeMini_Cold)
		{
			ObjectManager.GetInstance().storyVideoModel.MergeAnalytic(action, step);
		}
	}
}
