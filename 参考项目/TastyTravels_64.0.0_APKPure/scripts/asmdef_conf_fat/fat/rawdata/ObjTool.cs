using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ObjTool : ProtoBaseProxy<ObjTool>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public string Describe;

		public bool IsActive;

		public int RelatedCategory;

		public int ToolScore;

		public string TutorialImage;

		public int XXX_RowIdentifier { get; set; }

		public ObjTool()
		{
		}

		public ObjTool(ObjTool other)
		{
		}

		public override ObjTool Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
