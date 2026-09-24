using System.Collections.Generic;
using Config;
using FAT.Merge;
using IFix.Core;
using UnityEngine;

namespace FAT
{
	public static class BoardUtility
	{
		public static readonly Color iconColFrozen;

		public static List<AssetConfig> boxAssets;

		public static AssetConfig overallCoveringAsset;

		public static bool isBoxEdgeEnabled;

		public static float itemPopDuration;

		public static bool isConstantPopDuration;

		public static bool snapToFinger;

		public static List<(int id, Vector3 pos, float delay)> itemSpawnRequestList;

		public static bool debugShow { get; set; }

		public static bool botPlaying { get; set; }

		public static float cellSize { get; set; }

		public static float screenCellSize { get; set; }

		public static float canvasToScreenCoe { get; set; }

		public static float screenToCanvasCoe { get; set; }

		public static Vector2 originPosInScreenSpace { get; set; }

		public static Vector2 originPosInScreenSpaceGuideTalk { get; set; }

		public static bool isBoardCheckerPaused { get; set; }

		public static Sprite bubbleCoverSprite { get; set; }

		public static Sprite bubbleFrozenCoverSprite { get; set; }

		public static Sprite frozenCoverSprite { get; set; }

		public static Sprite BottomSprite { get; set; }

		public static BoardRes.SpawnPopParam spawnPopParam => null;

		public static BoardRes boardRes { get; set; }

		public static Material overallCoveringMat => null;

		public static void RegisterSpawnRequest(int itemId, Vector3 worldPos, float delay = -1f)
		{
		}

		public static bool ResolveSpawnRequest(int itemId, out Vector3 pos, out float delay)
		{
			pos = default(Vector3);
			delay = default(float);
			return false;
		}

		public static void ClearSpawnRequest()
		{
		}

		public static void PopSpawnRequest()
		{
		}

		public static void SpawnItemOrReward(Board board, int itemId, int num, Vector3 fromPos, Vector2Int toCoord, ReasonString reason, ItemSpawnContext.SpawnType spawnType)
		{
		}

		public static void SetCellSize(float size)
		{
		}

		public static void SetOriginPos(Vector2 pos)
		{
		}

		public static void SetOriginPosGuide(Vector2 pos)
		{
		}

		public static void SetCanvasToScreenCoe(float coe)
		{
		}

		public static void BoardCheckerPause(bool p)
		{
		}

		public static Vector3 GetWorldPosByCoord(Vector2Int coord)
		{
			return default(Vector3);
		}

		public static Vector2 GetRealCoordByScreenPos(Vector2 pos)
		{
			return default(Vector2);
		}

		public static Vector2 GetRealCoordByBoardPos(Vector2 pos)
		{
			return default(Vector2);
		}

		public static Vector2Int GetCoordByScreenPos(Vector2 pos)
		{
			return default(Vector2Int);
		}

		public static Vector2 GetPosByCoord(float x, float y)
		{
			return default(Vector2);
		}

		public static Vector2 GetScreenPosByCoord(float x, float y)
		{
			return default(Vector2);
		}

		public static Vector2 GetScreenPosByCoordGuideTalk(float x, float y)
		{
			return default(Vector2);
		}

		public static Vector2 GetScreenPosByBoardPos(Vector2 boardPos)
		{
			return default(Vector2);
		}

		public static Vector2 GetBoardPosByScreenPos(Vector2 pos)
		{
			return default(Vector2);
		}

		public static Vector2 CalcItemLocalPosInMoveRootByCoord(Vector2 coord)
		{
			return default(Vector2);
		}

		public static Vector2 CalcItemLocalPosInMoveRoot(Vector2 boardPos)
		{
			return default(Vector2);
		}

		public static void PlaceItemToBoardCoord(GameObject go, Vector2Int coord)
		{
		}

		public static Vector2 CalculateBezierPoint(float t, Vector2 p0, Vector2 p1, Vector2 p2)
		{
			return default(Vector2);
		}

		public static int FiilMatchItemList(Vector2Int coord, List<int> container = null)
		{
			return 0;
		}

		public static (bool, bool) TryUnlockGallery(Item item)
		{
			return default((bool, bool));
		}

		public static void LoadAndPreparePoolItem(string resConfig, string poolKey)
		{
		}

		public static PoolItemType EffTypeToPoolType(ItemEffectType type)
		{
			return default(PoolItemType);
		}

		[IDTag(0)]
		public static void AddAutoReleaseComponent(GameObject go, float lifeTime, string type)
		{
		}

		[IDTag(1)]
		public static void AddAutoReleaseComponent(GameObject go, float lifeTime, PoolItemType type)
		{
		}

		public static void ReleaseAutoPoolItemFromChildren(Transform root)
		{
		}

		public static void BindBoardRes(BoardRes res)
		{
		}

		public static void SetBoxAssets(int boardId)
		{
		}

		public static AssetConfig GetLevelLockBg()
		{
			return null;
		}

		public static AssetConfig GetBoxAsset(int idx)
		{
			return null;
		}

		public static void SetFrozenCoverSprite(Sprite sp)
		{
		}

		public static void SetBubbleCoverSprite(Sprite sp)
		{
		}

		public static void SetBubbleFrozenCoverSprite(Sprite sp)
		{
		}

		public static void SetBottomSprite(Sprite sp)
		{
		}

		public static (Vector2, Vector2, Vector2, Vector3) CalcBezierControlPosForSpawnByCoord(Vector2 from, Vector2 to, float midOffsetY, float endOffsetDist)
		{
			return default((Vector2, Vector2, Vector2, Vector3));
		}

		public static (Vector2, Vector2, Vector2) CalcBezierControlPos(Vector2 from, Vector2 to, bool ignoreOffset = false)
		{
			return default((Vector2, Vector2, Vector2));
		}

		public static (Vector2, float) GetRequestedSpawnPos(MBItemView view)
		{
			return default((Vector2, float));
		}

		public static void OnLackOfEnergy()
		{
		}

		public static void OnLackOfEnergyAfterEnergyShopClosed()
		{
		}

		public static bool CanWatchBubbleAds()
		{
			return false;
		}

		public static bool UseItemOnBoard(Item item, UserMergeOperation oper)
		{
			return false;
		}
	}
}
