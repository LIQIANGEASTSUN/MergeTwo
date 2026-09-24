// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.ApplySpeedUpBooster 0x10E9ACC; GameState.ApplySpeedUpBooster (candidate)
// Image base: 0x10000; Ghidra address: 010f9acc; native size hint: 0x270


void GameState_ApplySpeedUpBooster_010E9ACC(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  uint in_fpscr;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar9 = (char *)(iRam010f9d20 + 0x10f9af4);
  if (*pcVar9 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f9d24 + 0x10f9b08));
    func_0x00f6b160(*(undefined4 *)(iRam010f9d28 + 0x10f9b14));
    func_0x00f6b160(*(undefined4 *)(iRam010f9d2c + 0x10f9b20));
    *pcVar9 = '\x01';
  }
  if (param_2 == 0) {
    func_0x00f6b3d0();
  }
  uVar11 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(iRam010f9d30 + 17800000) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar4 = func_0x020081fc(uVar11,0);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_2 + 0x10);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010dcc80(iVar4,0);
  }
  iVar4 = *(int *)(param_2 + 0x84);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  uVar11 = *(undefined4 *)(iVar4 + 0x54);
  iVar4 = func_0x02007eac(param_2,0);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x020081a4(&uStack_40,iVar4,0);
  uVar3 = uStack_38;
  uVar2 = uStack_3c;
  uVar1 = uStack_40;
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  func_0x01d4b0fc(&uStack_40,uVar1,uVar2,uVar3,**(undefined4 **)(iRam010f9d34 + 0x10f9bec));
  func_0x010f1108(param_1,param_2,uStack_40,uStack_3c,uStack_38,uStack_34,0);
  piVar10 = *(int **)(iRam010f9d38 + 0x10f9c2c);
  piVar5 = (int *)func_0x00f6b298(param_3,*piVar10);
  if (piVar5 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  iVar4 = *piVar5;
  uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
  uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar6 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
        goto LAB_010f9c98;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined4 *)func_0x00fa6e88(piVar5,*piVar10,0);
LAB_010f9c98:
  (*(code *)*puVar6)(piVar5,uVar11,puVar6[1]);
  iVar4 = *piVar5;
  uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar8[-1] == *piVar10) {
        puVar6 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
        goto LAB_010f9cfc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined4 *)func_0x00fa6e88(piVar5,*piVar10,1);
LAB_010f9cfc:
  (*(code *)*puVar6)(piVar5,0,puVar6[1]);
  return;
}

