/* Ghidra 12.1.2 native pseudocode; RVA 0x6666A04; MergeEngine.ECS.Systems.Board.BoardQueueSystem.OnConnectionChanged; status ok */

void MergeEngine_ECS_Systems_Board_BoardQueueSystem__OnConnectionChanged(long param_1,int param_2)

{
  long lVar1;
  
  if ((bRam0000000007e280bc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077728f0);
    func_0x03280a18(PTR_DAT_077728f8);
    bRam0000000007e280bc = 1;
  }
  if (param_2 == 2) {
    if (*(long *)(param_1 + 0x80) == 0) {
      func_0x03280cac();
      return;
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x80) + 0x60);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x20) != '\0')) {
      func_0x0432164c(lVar1,0,*(undefined8 *)PTR_DAT_077728f8);
    }
  }
  *(int *)(param_1 + 0xe8) = param_2;
  return;
}

