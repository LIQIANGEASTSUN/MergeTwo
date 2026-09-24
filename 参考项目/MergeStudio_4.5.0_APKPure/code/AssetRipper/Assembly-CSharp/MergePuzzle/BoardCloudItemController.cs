using System;
using NaughtyAttributes;
using Paxie;
using Paxie.MergePuzzle;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace MergePuzzle
{
	public class BoardCloudItemController : BaseSubscriber, IEventReceiver<CameraEvent.CameraChangedRequest>, IEventReceiverBase, IEventReceiver<BoardEvent.BoosterPanelStatusChange>
	{
		[BoxGroup("UI")]
		public Canvas Canvas;

		[BoxGroup("UI")]
		public RectTransform RectTransform;

		[BoxGroup("UI")]
		public Image Background;

		[BoxGroup("UI")]
		public TextMeshProUGUI TapText;

		[BoxGroup("UI")]
		public TextMeshProUGUI UnlockLevelText;

		[BoxGroup("UI")]
		public Image Crown;

		[BoxGroup("Animation")]
		public AnimationController TapTextAnimationController;

		[BoxGroup("Animation")]
		public AnimationLoop TapTextIdleAnimationLoop;

		[BoxGroup("Animation")]
		public SkeletonGraphic CloudRemoveAnimPrefab;

		[NonSerialized]
		public EventEntity _eventEntity;

		[NonSerialized]
		public bool _isClickable;

		[NonSerialized]
		public SkeletonGraphic _cloudRemoveAnim;

		[NonSerialized]
		public BoardEntity _boardEntity;

		[NonSerialized]
		public Vector3 _tapTextDefaultScale;

		[NonSerialized]
		public WarningTextFactory _warningTextFactory;

		public int UnlockLevel { get; set; }

		public void Initialize(BoardEntity boardEntity, EventEntity eventEntity, int unlockLevel, bool hasUpperSortingOrder, SpriteRenderer spriteRenderer, Vector3 size, BoardData boardData, MetaData metaData)
		{
		}

		public void SetScale()
		{
		}

		public void OnCloudClick()
		{
		}

		public void RemoveCloud()
		{
		}

		public void PlayCloudRemoveAnimation()
		{
		}

		public bool IsReadyToDestroy()
		{
			return false;
		}

		public void OnEvent(CameraEvent.CameraChangedRequest e)
		{
		}

		public void ThrowWarning()
		{
		}

		public void OnEvent(BoardEvent.BoosterPanelStatusChange e)
		{
		}

		public override void OnDestroy()
		{
		}
	}
}
