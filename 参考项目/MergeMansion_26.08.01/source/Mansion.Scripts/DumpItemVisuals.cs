using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameLogic.Config;
using GameLogic.MergeChains;
using GameLogic.Player.Items;
using TMPro;
using UnityEngine;

public class DumpItemVisuals : MonoBehaviour
{
	[CompilerGenerated]
	public sealed class _003CDumpOnBoardInIntervals_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public DumpItemVisuals _003C_003E4__this;

		public string destination;

		[NonSerialized]
		public IEnumerator<MergeChainDefinition> _003C_003E7__wrap1;

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
		public _003CDumpOnBoardInIntervals_003Ed__11(int _003C_003E1__state)
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

	[CompilerGenerated]
	public sealed class _003CDumpSingleItemInIntervals_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[NonSerialized]
		public int _003C_003E1__state;

		[NonSerialized]
		public object _003C_003E2__current;

		public DumpItemVisuals _003C_003E4__this;

		public string destination;

		[NonSerialized]
		public IEnumerator<IItemDefinition> _003C_003E7__wrap1;

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
		public _003CDumpSingleItemInIntervals_003Ed__10(int _003C_003E1__state)
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
	public string combinedFolderName;

	[SerializeField]
	public string singleItemFolderName;

	[SerializeField]
	public bool singleItemDump;

	[SerializeField]
	[Range(0.01f, 3f)]
	public float waitTime;

	[SerializeField]
	public TextMeshProUGUI textLabel;

	[NonSerialized]
	public IMergeMansionGameConfig gameConfig;

	public void Start()
	{
	}

	public static string PrepareFolder(string folderName)
	{
		return null;
	}

	public void DumpSingleItemView()
	{
	}

	public void DumpOnBoardView()
	{
	}

	[IteratorStateMachine(typeof(_003CDumpSingleItemInIntervals_003Ed__10))]
	public IEnumerator DumpSingleItemInIntervals(string destination)
	{
		return null;
	}

	[IteratorStateMachine(typeof(_003CDumpOnBoardInIntervals_003Ed__11))]
	public IEnumerator DumpOnBoardInIntervals(string destination)
	{
		return null;
	}

	public string GetSubfolderName(IItemDefinition itemDefinition)
	{
		return null;
	}

	public static void CaptureScreenshot(string fullPath)
	{
	}

	public void Init(IItemDefinition itemDefinition)
	{
	}
}
