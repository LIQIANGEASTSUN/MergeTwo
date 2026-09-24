// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.DropFilledItems 0x10E9D3C; GameState.DropFilledItems (candidate)
// Image base: 0x10000; Ghidra address: 010f9d3c; native size hint: 0x308


void GameState_DropFilledItems_010E9D3C(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(iRam010fa018 + 0x10f9d5c);
  if (*pcVar7 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010fa01c + 0x10f9d74));
    func_0x00f6b160(*(undefined4 *)(iRam010fa020 + 0x10f9d80));
    func_0x00f6b160(*(undefined4 *)(iRam010fa024 + 0x10f9d8c));
    func_0x00f6b160(*(undefined4 *)(iRam010fa028 + 0x10f9d98));
    func_0x00f6b160(*(undefined4 *)(iRam010fa02c + 0x10f9da4));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (param_4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x02c0384c(&uStack_48,param_4,**(undefined4 **)(iRam010fa030 + 0x10f9dd8));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  while (iVar4 = func_0x02735d78(&uStack_38,**(undefined4 **)(iRam010fa034 + 0x10f9e10)),
        iVar3 = iStack_2c, iVar4 != 0) {
    iVar4 = 0;
    while( true ) {
      if (iVar3 == 0) {
        func_0x00f6b3d0();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar4) break;
      if (param_2 == 0) {
        func_0x00f6b3d0();
      }
      uVar8 = VectorSignedToFloat(*(undefined4 *)(param_2 + 0x14),(byte)(in_fpscr >> 0x16) & 3);
      uVar9 = VectorSignedToFloat(*(undefined4 *)(param_2 + 0x18),(byte)(in_fpscr >> 0x16) & 3);
      uVar8 = func_0x010f064c(param_1,uVar8,uVar9,param_2);
      iVar5 = func_0x014fae90(iVar3,0);
      if (iVar5 == 0) {
        func_0x00f6b3d0();
      }
      uVar9 = func_0x01100608(iVar5,0);
      uVar6 = *(undefined4 *)(param_1 + 0x44);
      if (param_3 == 0) {
        func_0x00f6b3d0();
      }
      iVar5 = func_0x02007eac(param_3,0);
      if (iVar5 == 0) {
        func_0x00f6b3d0();
      }
      func_0x020081a4(&uStack_48,iVar5,0);
      uVar2 = uStack_44;
      uVar1 = uStack_48;
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_40 = 0;
      func_0x01d4a7f0(&uStack_48,uVar1,uVar2,**(undefined4 **)(iRam010fa038 + 0x10f9f04));
      uVar8 = func_0x010e8708(param_1,uVar9,0,uVar8,1,uVar6,uStack_48,uStack_44,uStack_40,1,
                              0xffffffff,0,0,0xffffffff,1);
      func_0x010f5068(param_1,param_3,uVar8);
      iVar4 = iVar4 + 1;
    }
  }
  func_0x02735d74(&uStack_38,**(undefined4 **)(iRam010fa03c + 0x10f9f8c));
  return;
}

