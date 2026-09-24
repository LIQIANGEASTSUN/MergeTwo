using System.Collections.Generic;
using DragonU3DSDK.Storage;
using UnityEngine;

public class MomentsLightModel : ActivityEntityBase
{
	public enum MomentsLightPicStatus
	{
		Locked = 0,
		Unlocked = 1,
		Drawing = 2,
		Completed = 3
	}

	public static MomentsLightModel _instance;

	public static string CanShowUICoolTimeKey;

	public override string Guid => null;

	public static MomentsLightModel Instance => null;

	public StorageMomentsLight StorageMomentsLight => null;

	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
	public static void InitAuto()
	{
	}

	public List<MomentsLightPic> GetMomentsLightPics()
	{
		return null;
	}

	public override void InitFromServerData(string activityId, string activityType, ulong startTime, ulong endTime, ulong rewardEndTime, bool manualEnd, string configJson, string activitySubType)
	{
	}

	public override bool CanDownLoadRes()
	{
		return false;
	}

	public bool IsOpen()
	{
		return false;
	}

	public int GetBrush()
	{
		return 0;
	}

	public void SetBrush(int value)
	{
	}

	public void AddBrush(int value)
	{
	}

	public int GetBundleBuyCount(int bundleId)
	{
		return 0;
	}

	public StorageMomentsLightPic GetStorageMomentsLightStatus(int picId)
	{
		return null;
	}

	public MomentsLightPicStatus CalculatePicStatus(int picId)
	{
		return default(MomentsLightPicStatus);
	}

	public bool IsFirstPic(int picId)
	{
		return false;
	}

	public MomentsLightPicStatus GetPicStatus(int picId)
	{
		return default(MomentsLightPicStatus);
	}

	public float GetPicProgress(int picId)
	{
		return 0f;
	}

	public void UnlockPic(int picId)
	{
	}

	public bool AddPicStep(int picId, int stepCount = 1)
	{
		return false;
	}

	public void AddCompletionRewards(MomentsLightPic pic)
	{
	}

	public bool TryUnlockNextPic(int currentPicId)
	{
		return false;
	}

	public bool IsLastUnlockedPic(int picId)
	{
		return false;
	}

	public void RecordBundleBuy(int bundleId)
	{
	}

	public void PurchaseSuccess(int shopId)
	{
	}

	public List<StorageStoreItem> GetMomentsLightDailyItems()
	{
		return null;
	}

	public void GenerateMomentsLightShopItems()
	{
	}

	public bool IsDailyShopHaveFreeItem()
	{
		return false;
	}

	public bool CanRefreshDailyShop()
	{
		return false;
	}

	public string GetRefreshText()
	{
		return null;
	}

	public MomentsLightTask GetCurrentTaskConfig()
	{
		return null;
	}

	public void OnProduct(int index, int id, MergeBoard board, int doubleEnergyTimes)
	{
	}

	public void FlyBrush(int count, Vector3 scrPos)
	{
	}

	public bool CanShowUI()
	{
		return false;
	}

	public bool IsEnded()
	{
		return false;
	}

	public ResData GetMomentsLightExchangeResConfig()
	{
		return null;
	}

	public bool IsAllPicsCompleted()
	{
		return false;
	}

	public static void OpenCommonConfirmWindow(NoticeUIData data)
	{
	}

	public void _003C_003EiFixBaseProxy_InitFromServerData(string P0, string P1, ulong P2, ulong P3, ulong P4, bool P5, string P6, string P7)
	{
	}

	public bool _003C_003EiFixBaseProxy_CanDownLoadRes()
	{
		return false;
	}
}
