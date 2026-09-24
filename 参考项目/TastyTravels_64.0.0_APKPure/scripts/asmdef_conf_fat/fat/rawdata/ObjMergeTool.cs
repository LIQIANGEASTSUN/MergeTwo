using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class ObjMergeTool : ProtoBaseProxy<ObjMergeTool>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ToolId;

		public int ToolScore;

		public int XXX_RowIdentifier { get; set; }

		public ObjMergeTool()
		{
		}

		public ObjMergeTool(ObjMergeTool other)
		{
		}

		public override ObjMergeTool Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
