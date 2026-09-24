// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.RemoveItem 0x10E1108; GameState::RemoveItem()
// Image base: 0x10000; Ghidra address: 010f1108; native size hint: 0x174


void GameState_RemoveItem_010E1108
               (int param_1,int *param_2,char param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int param_7)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(iRam010f1268 + 0x10f1130);
  if (*pcVar1 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f126c + 0x10f114c));
    func_0x00f6b160(*(undefined4 *)(iRam010f1270 + 0x10f1158));
    func_0x00f6b160(*(undefined4 *)(iRam010f1274 + 0x10f1164));
    *pcVar1 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  (**(code **)(*param_2 + 0x150))(param_2,*(undefined4 *)(*param_2 + 0x154));
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar3 = param_2[0xd];
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  func_0x01149918(iVar2,iVar3,0);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  func_0x02c042ac(iVar2,param_2,**(undefined4 **)(iRam010f1278 + 0x10f11d0));
  if (param_7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010f11f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,*(undefined4 *)(*param_2 + 0x174));
    return;
  }
  if (param_3 == '\0') {
    iVar2 = func_0x02007eac(param_2,0);
    if (iVar2 == 0) {
      func_0x00f6b3d0();
    }
    func_0x020081a4(&uStack_30,iVar2,0);
    param_4 = uStack_30;
    param_6 = uStack_28;
    param_5 = uStack_2c;
  }
  (**(code **)(*param_2 + 0x168))(param_2,param_4,param_5,param_6,*(undefined4 *)(*param_2 + 0x16c))
  ;
  return;
}

