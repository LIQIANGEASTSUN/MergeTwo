using System;
using System.Threading;
using GameLogic.Player;
using GameLogic.Player.Rewards;
using Metacore.MergeMansion.UI.Libraries;
using Metaplay.Core;
using Pool;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Indicators
{
	public class RewardIndicatorBase : MonoBehaviour
	{
		public struct SetupParams
		{
			public SpecialContext specialContext;

			public bool usePreviewIcon;

			public bool canvasGroupCompatible;

			public SetupParams(bool usePreviewIcon = false, SpecialContext specialContext = SpecialContext.None, bool canvasGroupCompatible = false)
			{
				this.specialContext = default(SpecialContext);
				this.usePreviewIcon = false;
				this.canvasGroupCompatible = false;
			}
		}

		public enum SpecialContext
		{
			None = 0,
			RewardEventCharacterImage = 1
		}

		[Header("Icon")]
		[SerializeField]
		public bool ScaleReward;

		[SerializeField]
		public Vector3 ScaledScale;

		[SerializeField]
		public Image image;

		[SerializeField]
		public Transform visualsGroup;

		[SerializeField]
		public Transform visualParent;

		[Header("Labels")]
		[SerializeField]
		public bool disableEmptyLabelObjects;

		[SerializeField]
		public bool showPlusSignedAmount;

		[Header("Amount")]
		[SerializeField]
		public Transform amountParent;

		[SerializeField]
		public TextMeshProUGUI amountLabel;

		[SerializeField]
		public bool showAmount;

		[SerializeField]
		public bool oneIsAmount;

		[Header("Level Up Merge Chain")]
		[SerializeField]
		public GameObject levelUpMergeChainArrow;

		[NonSerialized]
		public string spineItemTag;

		[NonSerialized]
		public ObjectPoolElement pooledObject;

		[NonSerialized]
		public string skinName;

		[NonSerialized]
		public bool defaultImageValuesSet;

		[NonSerialized]
		public Material defaultImageMaterial;

		[NonSerialized]
		public Color defaultImageColor;

		[NonSerialized]
		public CancellationToken _destroyTokenCached;

		[NonSerialized]
		public bool _destroyTokenInitialized;

		[NonSerialized]
		public bool _isQuittingOrDestroyed;

		public Transform VisualsGroup => null;

		public Vector3 ImagePosition => default(Vector3);

		public Image Image => null;

		public bool ShowAmount
		{
			set
			{
			}
		}

		public TextMeshProUGUI AmountLabel => null;

		public virtual void Awake()
		{
		}

		public void EnsureDestroyToken()
		{
		}

		public CancellationToken GetSafeDestroyToken()
		{
			return default(CancellationToken);
		}

		public virtual void Setup(IPlayer player, IPlayerReward playerReward, IIconLibrary iconLibrary, SetupParams setupParams = default(SetupParams))
		{
		}

		public void SetAmountLabel(IPlayerReward playerReward, int? amount, bool isOneAmount, MetaDuration? durationOverride = null)
		{
		}

		public virtual void SetupSpine(bool canvasGroupCompatible)
		{
		}

		public void DisposeSpine()
		{
		}

		public void OnDestroy()
		{
		}

		public void SetIconFillColor(Color color)
		{
		}

		public void ClearIconFillColor()
		{
		}

		public bool TryGetSpineHandler(out SpineHandler spineHandler)
		{
			spineHandler = null;
			return false;
		}
	}
}
