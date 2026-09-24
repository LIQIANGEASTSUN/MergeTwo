// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.DividedItems 0x10E971C; GameState.DividedItems (candidate)
// Image base: 0x10000; Ghidra address: 010f971c; native size hint: 0x3B0


void GameState_DividedItems_010E971C
               (int param_1,int param_2,int param_3,int param_4,int *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint in_fpscr;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  pcVar7 = (char *)(iRam010f9ab0 + 0x10f9744);
  if (*pcVar7 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f9ab4 + 0x10f975c));
    func_0x00f6b160(*(undefined4 *)(iRam010f9ab8 + 0x10f9768));
    func_0x00f6b160(*(undefined4 *)(iRam010f9abc + 0x10f9774));
    *pcVar7 = '\x01';
  }
  if (param_4 == 0) {
    func_0x00f6b3d0();
  }
  *param_5 = *(int *)(param_4 + 0x18);
  if (param_3 == 0) {
    func_0x00f6b3d0();
  }
  iVar8 = *(int *)(param_3 + 0x10);
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  uVar10 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(iRam010f9ac0 + 0x10f97bc) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar5 = func_0x020081fc(uVar10,0);
  if (iVar5 == 0) {
    if (iVar8 == 0) {
      func_0x00f6b3d0();
    }
    uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
    uVar6 = VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
    uVar10 = func_0x010f064c(param_1,uVar10,uVar6,iVar8);
  }
  else {
    iVar5 = *(int *)(param_2 + 0x10);
    if (iVar5 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010dcc80(iVar5,0);
  }
  iVar5 = *(int *)(param_3 + 0x10);
  if (iVar5 == 0) {
    func_0x00f6b3d0();
  }
  func_0x010dcc80(iVar5,0);
  iVar5 = *param_5;
  if (iVar5 == 0) {
    func_0x00f6b3d0();
  }
  uVar6 = func_0x010e8708(param_1,iVar5,*(undefined1 *)(iVar5 + 0x1c),iVar8,1,
                          *(undefined4 *)(param_1 + 0x44),0,0,0,1,0xffffffff,0,0,0xffffffff,1);
  *param_6 = uVar6;
  iVar5 = *param_5;
  if (iVar5 == 0) {
    func_0x00f6b3d0();
  }
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  cVar1 = *(char *)(iVar5 + 0x1c);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  iVar8 = func_0x02007eac(iVar8,0);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  func_0x020081a4(&uStack_58,iVar8,0);
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x01d4a7f0(&uStack_48,uStack_58,uStack_54,**(undefined4 **)(iRam010f9ac4 + 0x10f9920));
  uVar10 = func_0x010e8708(param_1,iVar5,cVar1 != '\0',uVar10,1,uVar6,uStack_48,uStack_44,uStack_40,
                           1,0xffffffff,0,0,0xffffffff,1);
  iVar8 = func_0x02007eac(param_3,0);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  func_0x020081a4(&uStack_58,iVar8,0);
  uVar4 = uStack_50;
  uVar3 = uStack_54;
  uVar2 = uStack_58;
  uVar6 = 0;
  uVar11 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar9 = *(undefined4 **)(iRam010f9ac8 + 0x10f99d0);
  uStack_58 = 0;
  uStack_54 = uVar11;
  uStack_50 = uVar12;
  uStack_4c = uVar13;
  func_0x01d4b0fc(&uStack_58,uVar2,uVar3,uVar4,*puVar9);
  func_0x010f1108(param_1,param_3,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  iVar8 = func_0x02007eac(param_2,0);
  if (iVar8 == 0) {
    func_0x00f6b3d0();
  }
  func_0x020081a4(&uStack_68,iVar8,0);
  uVar4 = uStack_60;
  uVar3 = uStack_64;
  uVar2 = uStack_68;
  uStack_68 = uVar6;
  uStack_64 = uVar11;
  uStack_60 = uVar12;
  uStack_5c = uVar13;
  func_0x01d4b0fc(&uStack_68,uVar2,uVar3,uVar4,*puVar9);
  func_0x010f1108(param_1,param_2,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  func_0x010f5068(param_1,param_3,*param_6);
  func_0x010f5068(param_1,param_3,uVar10);
  return;
}

