using System;
using FAT.Merge;
using Spine.Unity;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

namespace FAT
{
	public class UIMergeBoardMini : UIBase
	{
		public enum State
		{
			Start = 0,
			Idle = 1,
			End = 2
		}

		[SerializeField]
		public MBBoardView _mbBoardView;

		[SerializeField]
		public SkeletonGraphic _screen;

		[SerializeField]
		public GameObject _root;

		[SerializeField]
		public GameObject _helpNode;

		[SerializeField]
		public GameObject _endNode;

		[FormerlySerializedAs("_order")]
		[SerializeField]
		public MBMiniBoardProgress progress;

		[SerializeField]
		public MBMiniBoardReward _reward;

		[SerializeField]
		public TextMeshProUGUI _cd;

		[SerializeField]
		public TextMeshProUGUI _title;

		[SerializeField]
		public TextMeshProUGUI _help;

		[SerializeField]
		public TextMeshProUGUI _end;

		[SerializeField]
		public GameObject _helpBtn;

		[SerializeField]
		public GameObject _endbtn;

		[SerializeField]
		public MiniBoardActivity _curAct;

		[NonSerialized]
		public bool _isEnd;

		[NonSerialized]
		public bool _isComplete;

		[NonSerialized]
		public bool _init;

		[NonSerialized]
		public bool _playingAni;

		[NonSerialized]
		public State _curState;

		public override void OnCreate()
		{
		}

		public override void OnParse(params object[] items)
		{
		}

		public void Exit()
		{
		}

		public void ClickPlay()
		{
		}

		public void PlayStartAnim()
		{
		}

		public override void OnPreOpen()
		{
		}

		public void SetComp()
		{
		}

		public void SetTheme()
		{
		}

		public void SetUIState()
		{
		}

		public void SetEndState()
		{
		}

		public void SetIdleState()
		{
		}

		public void SetStartState()
		{
		}

		public override void OnPostOpen()
		{
		}

		public override void OnPreClose()
		{
		}

		public override void OnPostClose()
		{
		}

		public void Update()
		{
		}

		public void RefreshCD()
		{
		}

		public void ActivityEnd()
		{
		}

		public void UnlockItem(Item item)
		{
		}

		public void _003C_003EiFixBaseProxy_OnCreate()
		{
		}

		public void _003C_003EiFixBaseProxy_OnParse(object[] P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreOpen()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostOpen()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPreClose()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostClose()
		{
		}
	}
}
