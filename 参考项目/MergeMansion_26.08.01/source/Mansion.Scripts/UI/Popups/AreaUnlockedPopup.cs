using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using DG.Tweening;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using TMPro;
using UI.Areas;
using UI.Indicators;
using UI.Libraries;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class AreaUnlockedPopup : PopupBase<AreaUnlockedMenuState>
	{
		[Serializable]
		public struct References
		{
			[Header("UIElements")]
			public GameObject popup;

			public Image blueOverlay;

			public AreaBanner areaBanner;

			public TextMeshProUGUI nameText;

			public TextMeshProUGUI shortDescriptionText;

			public DOTweenAnimation tapToContinueAnimation;

			public Button tapToContinueButton;

			public GameObject areaHeaderIconContainer;

			public Image areaHeaderIcon;

			[Header("New items")]
			public GameObject newItemSection;

			public Transform newItemContainer;

			public GameObject newItemLevelsSection;

			public Transform newItemLevelsContainer;

			public DOTweenAnimation newItemLevelsHeaderAnimation;

			public DOTweenAnimation newItemHeaderAnimation;

			public DiscoverableItem itemPrefab;

			[Header("Libraries")]
			public AreaIcons areaIcons;

			public LocationTravelUILibrary LocationUILibrary;
		}

		[CompilerGenerated]
		public sealed class _003CCreateItemsAnimation_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public object _003C_003E2__current;

			public float delayAtStart;

			public bool isNewItem;

			public AreaUnlockedPopup _003C_003E4__this;

			public Dictionary<MergeChainId, IItemDefinition> itemsDefinitions;

			public bool showTabToContinue;

			[NonSerialized]
			public Dictionary<MergeChainId, IItemDefinition>.Enumerator _003C_003E7__wrap1;

			object IEnumerator<object>.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			object IEnumerator.Current
			{
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[DebuggerHidden]
			public _003CCreateItemsAnimation_003Ed__21(int _003C_003E1__state)
			{
			}

			[DebuggerHidden]
			void IDisposable.Dispose()
			{
			}

			private bool MoveNext()
			{
				return false;
			}

			bool IEnumerator.MoveNext()
			{
				//ILSpy generated this explicit interface implementation from .override directive in MoveNext
				return this.MoveNext();
			}

			public void _003C_003Em__Finally1()
			{
			}

			[DebuggerHidden]
			void IEnumerator.Reset()
			{
			}
		}

		[SerializeField]
		public References refs;

		[NonSerialized]
		public readonly List<DiscoverableItem> newItems;

		[NonSerialized]
		public readonly List<DiscoverableItem> newItemLevels;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override AreaUnlockedMenuState MenuState { get; set; }

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override void OnShow()
		{
		}

		public override void PopulateContent()
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		[IteratorStateMachine(typeof(_003CCreateItemsAnimation_003Ed__21))]
		public IEnumerator CreateItemsAnimation(Dictionary<MergeChainId, IItemDefinition> itemsDefinitions, bool isNewItem, float delayAtStart = 0f, bool showTabToContinue = true)
		{
			return null;
		}

		public DiscoverableItem CreateItem(IItemDefinition itemDefinition, Transform parentTransform, bool isNewItem = false)
		{
			return null;
		}

		[PublicAPI]
		public void ContinueClicked()
		{
		}
	}
}
