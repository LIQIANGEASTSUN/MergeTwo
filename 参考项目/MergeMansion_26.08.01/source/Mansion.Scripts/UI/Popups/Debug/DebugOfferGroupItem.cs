using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Offers;
using GameLogic.Player;
using JetBrains.Annotations;
using Merge;
using TMPro;
using UnityEngine;

namespace UI.Popups.Debug
{
	public class DebugOfferGroupItem : MonoBehaviour
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CTransitionToMergeBoardAndShowShop_003Ed__10 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public PlayerModel player;

			public MergeBoardId mergeBoardId;

			public CancellationToken ct;

			public IMenuController menuController;

			public IActiveOfferGroup offerGroup;

			[NonSerialized]
			public UniTask.Awaiter _003C_003Eu__1;

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

		public const string RightPanePlacementIdStart = "RightPane";

		public const string OffersPopupPlacementId = "OffersPopup";

		[SerializeField]
		public TextMeshProUGUI nameLabel;

		[NonSerialized]
		public DebugOffersMenuState menuState;

		[NonSerialized]
		public IActiveOfferGroup offerGroup;

		public string Name => null;

		public void Initialize(DebugOffersMenuState menuState, IActiveOfferGroup offerGroup)
		{
		}

		[PublicAPI]
		public void ButtonClicked()
		{
		}

		[PublicAPI]
		public void InfoButtonClicked()
		{
		}

		[AsyncStateMachine(typeof(_003CTransitionToMergeBoardAndShowShop_003Ed__10))]
		public static UniTask TransitionToMergeBoardAndShowShop(PlayerModel player, MergeBoardId mergeBoardId, IMenuController menuController, IActiveOfferGroup offerGroup, CancellationToken ct)
		{
			return default(UniTask);
		}

		public static void ShowShop(IMenuController menuController, IActiveOfferGroup offerGroup)
		{
		}
	}
}
