using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Cysharp.Threading.Tasks;
using Cysharp.Threading.Tasks.CompilerServices;
using GameLogic.Player.Items;
using JetBrains.Annotations;
using TMPro;
using UI.Buttons;
using UI.States;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Popups
{
	public class MergeResultConfirmationDialogPopup : PopupBase<MergeResultConfirmationDialogState>
	{
		[StructLayout((LayoutKind)3)]
		[CompilerGenerated]
		public struct _003CEnableConfirmationWithDelay_003Ed__31 : IAsyncStateMachine
		{
			public int _003C_003E1__state;

			public AsyncUniTaskMethodBuilder _003C_003Et__builder;

			public MergeResultConfirmationDialogPopup _003C_003E4__this;

			public float delaySeconds;

			public CancellationToken cancellationToken;

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

		[SerializeField]
		public Image blueOverlay;

		[SerializeField]
		public TextMeshProUGUI titleText;

		[SerializeField]
		public TextMeshProUGUI confirmationQuestionText;

		[SerializeField]
		public TweenedButton confirmButton;

		[SerializeField]
		public TextMeshProUGUI confirmationButtonText;

		[SerializeField]
		public TweenedButton disabledConfirmButton;

		[SerializeField]
		public TextMeshProUGUI disabledConfirmButtonText;

		[SerializeField]
		public TextMeshProUGUI cancellationButtonText;

		[SerializeField]
		public GameObject warningContainer;

		[SerializeField]
		public Image warningIconImage;

		[SerializeField]
		public TextMeshProUGUI warningText;

		[SerializeField]
		public ItemFrame fromItemFrame;

		[SerializeField]
		public ItemFrame toItemFrame;

		[SerializeField]
		public GameObject arrow;

		[NonSerialized]
		public bool alreadyConfirmed;

		[NonSerialized]
		public bool alreadyCancelled;

		public override string MenuTag => null;

		public override GameObject Popup => null;

		public override Image BlueOverlay => null;

		public override ScrollRect ScrollRect => null;

		public override MergeResultConfirmationDialogState MenuState { get; set; }

		public override bool NeedsBlockingLayer()
		{
			return false;
		}

		public override bool DoesSupportHardwareBackButton()
		{
			return false;
		}

		public override void PopulateContent()
		{
		}

		[AsyncStateMachine(typeof(_003CEnableConfirmationWithDelay_003Ed__31))]
		public UniTask EnableConfirmationWithDelay(float delaySeconds, CancellationToken cancellationToken)
		{
			return default(UniTask);
		}

		public void SetConfirmButtonEnabled(bool enabled)
		{
		}

		public void SetMergeItemIcon(MergeItem mergeItem, ItemFrame itemFrame)
		{
		}

		public void SetMergeItemIconEnabled(ItemFrame itemFrame, bool enabled)
		{
		}

		public override void DisposeContent(DisposeContentReason reason)
		{
		}

		[PublicAPI]
		public void Confirm()
		{
		}

		[PublicAPI]
		public void Cancel()
		{
		}
	}
}
