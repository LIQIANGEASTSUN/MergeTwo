using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Audio;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Hotspots;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using Metacore.MergeMansion.Common.Addressables;
using Metacore.MergeMansion.Common.Options;
using TMPro;
using UI.Buttons;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Indicators
{
	public class SpineInfoItemIndicator : MonoBehaviour
	{
		[Serializable]
		public class SpriteSettings
		{
			public string id;

			public Sprite Sprite;
		}

		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CSetSprite_003Ed__70 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public SpineInfoItemIndicator _003C_003E4__this;

			public string id;

			public CancellationToken ct;

			[NonSerialized]
			public UniTask<IDisposableAssetHandle<Sprite>>.Awaiter _003C_003Eu__1;

			private void MoveNext()
			{
			}

			void IAsyncStateMachine.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				this.MoveNext();
			}

			[DebuggerHidden]
			private void SetStateMachine(IAsyncStateMachine stateMachine)
			{
			}

			void IAsyncStateMachine.SetStateMachine(IAsyncStateMachine stateMachine)
			{
				//ILSpy generated this explicit interface implementation from .override directive in SetStateMachine
				this.SetStateMachine(stateMachine);
			}
		}

		[SerializeField]
		public Image checkmark;

		[SerializeField]
		public Image greenBackground;

		[SerializeField]
		public Image background;

		[SerializeField]
		public Transform checkmarkParent;

		[SerializeField]
		public SerializableOption<GameObject> _greenBackgroundContainer;

		[SerializeField]
		public SerializableOption<GameObject> _backgroundContainer;

		[SerializeField]
		public Image image;

		[SerializeField]
		public TextMeshProUGUI amountLabel;

		[SerializeField]
		public TextMeshProUGUI levelLabel;

		[SerializeField]
		public TextMeshProUGUI nameLabel;

		[SerializeField]
		public Transform visualParent;

		[SerializeField]
		public Image infoImage;

		[SerializeField]
		public GameObject flashSaleIndicator;

		[SerializeField]
		public CurrencyButton flashSaleCurrencyButton;

		[SerializeField]
		public TweenedButton containerButton;

		[SerializeField]
		public SerializableOption<TweenedButton> _shopButton;

		[Header("Wild item get button")]
		[SerializeField]
		public List<GameObject> wildItemsActiveObjects;

		[Header("Debug")]
		[SerializeField]
		public DebugAddItemToBoardButton debugAddToBoardButton;

		[NonSerialized]
		public string spineItemTag;

		[NonSerialized]
		public GameObject pooledObject;

		[NonSerialized]
		public IItemDefinition itemDefinition;

		[NonSerialized]
		public int itemLevel;

		[NonSerialized]
		public string itemSkin;

		[NonSerialized]
		public Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> viewCallback;

		[NonSerialized]
		public Action notifyChange;

		[NonSerialized]
		public Action showShopPopup;

		[NonSerialized]
		public Option<IDisposableAssetHandle<Sprite>> _spriteHandle;

		[NonSerialized]
		public ItemInfoPopupFlags viewActionFlags;

		[NonSerialized]
		public Option<IMergeItem> _sinkOption;

		[NonSerialized]
		public string wildItemTaskId;

		public IAudioPlayer Audio => null;

		public bool Active
		{
			get
			{
				return false;
			}
			set
			{
			}
		}

		public void SetIndicator(IItemDefinition definition, int amountAvailable, int amountNeeded, Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> viewAction, Action notifyChange = null, bool displaySingleItemLabel = false, Option<IMergeItem> sinkOption = default(Option<IMergeItem>))
		{
		}

		public void ToggleWildItemGetButton(int amountAvailable, int amountNeeded, string taskId, bool isEnabled = false)
		{
		}

		public void TriggerWildItemConfirmationPopup()
		{
		}

		public void UseWildItem()
		{
		}

		public bool HasActiveWildItemIndicator()
		{
			return false;
		}

		public Option<Transform> GetWildItemIndicatorTransform()
		{
			return default(Option<Transform>);
		}

		public void DisableWildItemIndicators()
		{
		}

		public Vector3 GetBuyButtonPosition()
		{
			return default(Vector3);
		}

		public void SetIndicatorWithFlashSale(IItemDefinition definition, int amountAvailable, int amountNeeded, Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> showItemInfoPopupMenu, Action showShopPopup, Action notifyChange = null, (Currencies currency, long price)? priceInfo = null, Action onPurchaseClicked = null, bool displaySingleItemLabel = false, Option<IMergeItem> sinkOption = default(Option<IMergeItem>))
		{
		}

		public void SetIndicator(IItemDefinition definition, int amountAvailable, int amountNeeded, Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> showItemInfoPopupMenu, Action showShopPopup, Action notifyChange = null, bool displaySingleItemLabel = false, Option<IMergeItem> sinkOption = default(Option<IMergeItem>))
		{
		}

		public void SetAmountText(string text)
		{
		}

		public void UpdateAmountText(int amountAvailable, int amountNeeded, bool displaySingleItemLabel = false)
		{
		}

		public void SetBackground(bool isEnabled)
		{
		}

		public void UpdateFlashSaleIndicator(IItemDefinition definition)
		{
		}

		public void SetIndicator(IItemDefinition definition, int amountAvailable, int amountNeeded, Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> viewAction, ItemInfoPopupFlags viewActionFlags, Action notifyChange = null)
		{
		}

		public void SetIndicator(Sprite sprite)
		{
		}

		public void SetIndicator(Sprite sprite, string nameText, int amountAvailable, int amountNeeded, bool showName, Option<IMergeItem> sinkOption = default(Option<IMergeItem>))
		{
		}

		public void SetIndicatorWithoutAmount(IHotspotDefinition hotspot, IItemDefinition definition, string nameText, bool showName, bool requirementMet, Action<IMergeChainDefinition, IItemDefinition, bool, ItemInfoPopupFlags> viewAction, bool isBoardEvent = false)
		{
		}

		public void RefreshCompletion(int amountAvailable, int amountNeeded)
		{
		}

		public void SetCheckmarkEnabled(bool isEnabled)
		{
		}

		public void ClearViewCallback()
		{
		}

		[PublicAPI]
		public virtual void InfoButtonPressed()
		{
		}

		[PublicAPI]
		public virtual void OpenShopButtonPressed()
		{
		}

		public void SetupSpine()
		{
		}

		public void EnableSpine()
		{
		}

		public void DisposeSpine()
		{
		}

		public void DisableImage()
		{
		}

		public virtual void OnDisable()
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

		public void SetIconTintColor(Color color)
		{
		}

		public void SetAlpha(float alpha)
		{
		}

		public void RefreshDebugAddToBoardButton(int addCount)
		{
		}

		[AsyncStateMachine(typeof(_003CSetSprite_003Ed__70))]
		public UniTask SetSprite(string id, CancellationToken ct)
		{
			return default(UniTask);
		}

		public bool ApplySpriteFromHandle(IDisposableAssetHandle<Sprite> handle)
		{
			return false;
		}

		public void SetShopButton(bool value, Action callback)
		{
		}
	}
}
