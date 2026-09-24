// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.MergeWithAnimationDragged 0x10E4F74; GameState.MergeWithAnimationDragged (candidate)
// Image base: 0x10000; Ghidra address: 010f4f74; native size hint: 0xF4


void GameState_MergeWithAnimationDragged_010E4F74
               (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(iRam010f505c + 0x10f4f94);
  if (*pcVar5 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f5060 + 0x10f4fac));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  iVar4 = func_0x02007eac(param_2,0);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x020081a4(&uStack_38,iVar4,0);
  uVar3 = uStack_30;
  uVar2 = uStack_34;
  uVar1 = uStack_38;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  func_0x01d4b0fc(&uStack_38,uVar1,uVar2,uVar3,**(undefined4 **)(iRam010f5064 + 0x10f5014));
  func_0x010f1108(param_1,param_3,uStack_38,uStack_34,uStack_30,uStack_2c,0);
  func_0x010f5068(param_1,param_2,param_4);
  return;
}

