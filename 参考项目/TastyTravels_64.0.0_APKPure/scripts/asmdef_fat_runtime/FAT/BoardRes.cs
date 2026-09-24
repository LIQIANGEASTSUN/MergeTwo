using System;
using DG.Tweening;
using UnityEngine;

namespace FAT
{
	[CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/FatBoardRes", order = 1)]
	public class BoardRes : ScriptableObject
	{
		[Serializable]
		public class SpawnPopParam
		{
			[Tooltip("启动延迟")]
			public float startDelay;

			[Tooltip("飞行100单位需要花费的时间")]
			public float flyDurationPer100;

			[Tooltip("飞行时间的额外加成")]
			public float flyDurationExtra;

			[Tooltip("落地前多久开始播放下落动画")]
			public float flyEndDropTimeOffset;

			[Tooltip("飞行中点y偏移")]
			public float flyMidOffsetY;

			[Tooltip("飞行落点偏移距离")]
			public float flyEndOffsetDist;

			[Tooltip("飞行节奏曲线")]
			public Ease flyEase;

			[Tooltip("落地漂移时长")]
			public float moveDuration;

			[Tooltip("落地漂移节奏曲线")]
			public Ease moveEase;
		}

		public float itemPopDuration;

		public bool isConstantPopDuration;

		public bool snapToFinger;

		public Sprite frozenCoverSprite;

		public Sprite chestOpenTimerSprite;

		public Sprite bubbleCoverSprite;

		public Sprite bubbleFrozenCoverSprite;

		public Sprite bottomSprite;

		public Sprite cloudSprite;

		public SpawnPopParam spawnPopParam;

		public MergeParam mergeParam;

		public OrderParam orderParam;

		public Material frozenItemMat;

		public Material levelBgMat;

		[NamedArray(typeof(ItemEffectType))]
		public GameObject[] effectHolder;

		public string TapLockedSound;

		public void Install(int bid)
		{
		}

		public static PoolPolicyProfile ProfileOfItemEffectType(ItemEffectType type)
		{
			return null;
		}
	}
}
