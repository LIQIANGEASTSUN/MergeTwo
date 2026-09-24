using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using EL.Resource;
using IFix.Core;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using fat.rawdata;

namespace FAT
{
	public class ActivityVisual : IAssetDependent
	{
		[CompilerGenerated]
		public sealed class _003CResEnumerate_003Ed__34 : IEnumerable<(string, AssetTag)>, IEnumerable, IEnumerator<(string, AssetTag)>, IEnumerator, IDisposable
		{
			[NonSerialized]
			public int _003C_003E1__state;

			[NonSerialized]
			public (string, AssetTag) _003C_003E2__current;

			[NonSerialized]
			public int _003C_003El__initialThreadId;

			public ActivityVisual _003C_003E4__this;

			[NonSerialized]
			public IEnumerator<KeyValuePair<string, string>> _003C_003E7__wrap1;

			(string, AssetTag) IEnumerator<(string, AssetTag)>.Current
			{
				[DebuggerHidden]
				get
				{
					return default((string, AssetTag));
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
			public _003CResEnumerate_003Ed__34(int _003C_003E1__state)
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

			[DebuggerHidden]
			IEnumerator<(string, AssetTag)> IEnumerable<(string, AssetTag)>.GetEnumerator()
			{
				return null;
			}

			[DebuggerHidden]
			IEnumerator IEnumerable.GetEnumerator()
			{
				return null;
			}
		}

		public EventTheme Theme { get; set; }

		public Entrance Entrance { get; set; }

		public Popup Popup { get; set; }

		public bool Valid => false;

		public int PopupId => 0;

		public string TargetAsset => null;

		public string EntryIcon => null;

		public bool EntryVisible => false;

		public bool EntryOnLeft => false;

		public int Priority => 0;

		public VisualMap AssetMap => default(VisualMap);

		public VisualMap TextMap => default(VisualMap);

		public VisualMap StyleMap => default(VisualMap);

		public bool Setup(int id_, UIResAlt ui_ = null)
		{
			return false;
		}

		public void Clear()
		{
		}

		[IteratorStateMachine(typeof(_003CResEnumerate_003Ed__34))]
		public IEnumerable<(string, AssetTag)> ResEnumerate()
		{
			return null;
		}

		[IDTag(6)]
		public void Refresh(UIVisualGroup group_)
		{
		}

		public void RefreshC(Component target_, string key_, int index_)
		{
		}

		[IDTag(5)]
		public void Refresh(Graphic target_, string key_)
		{
		}

		[IDTag(0)]
		public void Refresh(UIImageRes target_, string key_)
		{
		}

		[IDTag(2)]
		public void Refresh(UIImageState target_, string key_, int index_)
		{
		}

		[IDTag(1)]
		public void Refresh(UITextState target_, string key_, int index_)
		{
		}

		[IDTag(3)]
		public void Refresh(TextProOnACurve target_, string key_)
		{
		}

		[IDTag(4)]
		public void Refresh(TMP_Text target_, string key_)
		{
		}

		[IDTag(1)]
		public void RefreshText(UIVisualGroup g_, string k_, params object[] v_)
		{
		}

		[IDTag(0)]
		public void RefreshText(TMP_Text target_, string key_, TextProOnACurve text_ = null)
		{
		}

		public void RefreshStyle(TMP_Text target_, string key_)
		{
		}

		public bool TryGetMaterial(TMP_Text target_, string s_, out BaseFontMatResConfig mat_)
		{
			mat_ = null;
			return false;
		}

		public bool TryGetColor(TMP_Text target_, string key_, string s_, out Color c_)
		{
			c_ = default(Color);
			return false;
		}
	}
}
