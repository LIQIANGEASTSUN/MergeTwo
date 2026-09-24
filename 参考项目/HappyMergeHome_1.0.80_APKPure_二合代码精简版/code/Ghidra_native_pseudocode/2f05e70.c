
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f15e70(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02f1620c + 0x2f15e88);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f16210 + 0x2f15e9c));
    func_0x01438628(*(undefined4 *)(_UNK_02f16214 + 0x2f15ea8));
    func_0x01438628(*(undefined4 *)(_UNK_02f16218 + 0x2f15eb4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1621c + 0x2f15ec0));
    func_0x01438628(*(undefined4 *)(_UNK_02f16220 + 0x2f15ecc));
    func_0x01438628(*(undefined4 *)(_UNK_02f16224 + 0x2f15ed8));
    func_0x01438628(*(undefined4 *)(_UNK_02f16228 + 0x2f15ee4));
    func_0x01438628(*(undefined4 *)(_UNK_02f1622c + 0x2f15ef0));
    func_0x01438628(*(undefined4 *)(_UNK_02f16230 + 0x2f15efc));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x6cad,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    if (iVar1 != 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02f16234 + 0x2f15f7c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = 0;
      iVar1 = func_0x02b63a9c(iVar1,0x1901,0,0);
      if (iVar1 != 0) {
        piVar8 = *(int **)(_UNK_02f16238 + 0x2f15fbc);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(_UNK_02f1623c + 0x2f15fd8);
        iVar1 = func_0x03b2c734(*puVar9);
        piVar7 = *(int **)(_UNK_02f16240 + 0x2f15fec);
        iVar4 = *piVar7;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x014387a4();
          iVar4 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = 0;
        iVar1 = func_0x02b76b98(iVar1,0,uVar3,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x03b2c734(*puVar9);
          iVar4 = *piVar7;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x014387a4();
            iVar4 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
          if (*(int *)(**(int **)(_UNK_02f16244 + 0x2f16078) + 0x74) == 0) {
            func_0x014387a4(**(int **)(_UNK_02f16244 + 0x2f16078));
          }
          uStack_38 = func_0x02aed6d8(0);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          func_0x02b768cc(iVar1,0,uVar6);
          iVar1 = FUN_02f0ab60(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0x58) < 2) {
            func_0x02f16258(param_1,2);
          }
          iVar1 = FUN_02f1320c(param_1);
          if (*(int *)(**(int **)(_UNK_02f16248 + 0x2f16120) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1624c + 0x2f1613c));
          piVar8 = *(int **)(_UNK_02f16250 + 0x2f16150);
          iVar2 = *piVar8;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x014387a4();
            iVar2 = *piVar8;
          }
          if (iVar1 == 0) {
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc78);
          }
          else {
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc7c);
          }
          iVar2 = **(int **)(_UNK_02f16254 + 0x2f16178);
          iVar1 = *(int *)(iVar2 + 0x1c);
          if (iVar1 == 0) {
            func_0x014909d8(iVar2);
            iVar1 = *(int *)(iVar2 + 0x1c);
          }
          iVar1 = *(int *)(iVar1 + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x0149097c();
          }
          uVar3 = **(undefined4 **)(iVar1 + 0x5c);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x02b0c90c(iVar4,uVar6,uVar3,0);
          uVar6 = 1;
        }
      }
    }
    return uVar6;
  }
  iVar1 = func_0x029540a4(0x6cad,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
  uVar6 = func_0x024f56e0(&uStack_30,0,0);
  return uVar6;
}

