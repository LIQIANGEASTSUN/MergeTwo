
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f124ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02f12d48 + 0x2f12504);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f12d4c + 0x2f12518));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d50 + 0x2f12524));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d54 + 0x2f12530));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d58 + 0x2f1253c));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d5c + 0x2f12548));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d60 + 0x2f12554));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d64 + 0x2f12560));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d68 + 0x2f1256c));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d6c + 0x2f12578));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d70 + 0x2f12584));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d74 + 0x2f12590));
    func_0x01438628(*(undefined4 *)(_UNK_02f12d78 + 0x2f1259c));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6ca5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x015fcde8(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
      iVar1 = FUN_02f0ab60(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x01523ccc(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 0x10),0);
      uVar14 = FUN_02f0ab60(param_1);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      iVar2 = (int)uVar14;
      if (iVar1 == 0) {
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        FUN_0268be6c(iVar2,0);
        iVar1 = FUN_02f0ab60(param_1);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b2e5c(iVar1,uVar6,0);
        uVar14 = FUN_02f0ab60(param_1);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar8 = *(undefined4 *)(param_1 + 0x18);
        uVar12 = *(undefined4 *)(param_1 + 0x1c);
        if ((int)uVar14 == 0) {
          func_0x014388e4();
          uVar6 = extraout_r1_01;
        }
        func_0x026b2fec((int)uVar14,uVar6,uVar8,uVar12,0);
        uVar14 = FUN_02f0ab60(param_1);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined4 *)(param_1 + 0x24);
        if ((int)uVar14 == 0) {
          func_0x014388e4();
          uVar6 = extraout_r1_02;
        }
        func_0x026b30bc((int)uVar14,uVar6,uVar8,uVar12,0);
        iVar1 = FUN_02f0ab60(param_1);
        iVar2 = FUN_02f0ab60(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar13 = *(uint *)(iVar2 + 0x10);
        iVar2 = *(int *)(iVar2 + 0x14);
        if (*(int *)(**(int **)(_UNK_02f12d7c + 0x2f1278c) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar11 = *(undefined4 **)(_UNK_02f12d80 + 0x2f127b0);
        iVar3 = func_0x04e4a028(*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x0205c58c(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puVar10 = *(undefined4 **)(_UNK_02f12d84 + 0x2f127f4);
        iVar3 = func_0x04cfd760(iVar3,0,*puVar10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = iVar3 * 60000;
        func_0x026b318c(iVar1,0,uVar13 + uVar4,
                        iVar2 + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar13,uVar4),0);
        if (*(int *)(**(int **)(_UNK_02f12d88 + 0x2f12844) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02f12d8c + 0x2f12860));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020e9710(iVar1,0);
        iVar2 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0x150);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026b2f30(iVar2,uVar6,0);
        iVar1 = FUN_02f0ab60(param_1);
        iVar2 = func_0x04e4a028(*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        puVar9 = *(undefined4 **)(_UNK_02f12d90 + 0x2f12904);
        iVar2 = func_0x04cfd760(iVar2,0,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b33d4(iVar1,uVar6,0);
        iVar1 = FUN_02f0ab60(param_1);
        iVar2 = func_0x04e4a028(*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x3c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b3490(iVar1,uVar6,0);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b325c(iVar1,1,0);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x3c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puVar7 = *(undefined4 **)(_UNK_02f12d94 + 0x2f129ec);
        func_0x03b75c84(iVar1,*puVar7);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b75c84(iVar1,*puVar7);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b3618(iVar1,0,0);
        iVar1 = FUN_02f0ab60(param_1);
        iVar2 = func_0x04e4a028(*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x04cfd760(iVar2,0,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        if (*(int *)(**(int **)(_UNK_02f12d98 + 0x2f12aac) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar6 = func_0x03649964(uVar6,**(undefined4 **)(_UNK_02f12d9c + 0x2f12acc));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b3318(iVar1,uVar6,0);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b354c(iVar1,0,0);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puVar9 = *(undefined4 **)(_UNK_02f12da0 + 0x2f12b54);
        func_0x03b70d24(iVar1,*puVar9);
        iVar1 = FUN_02f0ab60(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x54);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b70d24(iVar1,*puVar9);
        func_0x02f12dac(param_1);
        iVar2 = **(int **)(**(int **)(_UNK_02f12da4 + 0x2f12ba0) + 0x5c);
        iVar1 = func_0x04e4a028(*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0205c58c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x04cfd760(iVar1,0,*puVar10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uVar6 = *(undefined4 *)(iVar1 + 0x18);
        uStack_48 = 0;
        uStack_38 = 0;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        func_0x02028d38(&uStack_48,0x7f,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar8 = uStack_3c;
        FUN_02e64460(iVar2,0x3bf,uVar6,uStack_34,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,
                     uStack_34,uStack_30,uStack_2c,1,0,0,0);
        if (*(int *)(**(int **)(_UNK_02f12da8 + 0x2f12c94) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uStack_28 = func_0x02f12f44(param_1);
        uVar6 = func_0x01524ffc(&uStack_28,0);
        iVar2 = FUN_02f0ab60(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = *(undefined4 *)(iVar2 + 0x2c);
        uVar12 = func_0x01524ffc(&uStack_28,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x250,uVar6,uVar12,0,0,0,uVar8,0,0,0,0,0);
      }
      else {
        uVar12 = *(undefined4 *)(param_1 + 0x18);
        uVar8 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar2 == 0) {
          func_0x014388e4();
          uVar6 = extraout_r1;
        }
        func_0x026b2fec(iVar2,uVar6,uVar12,uVar8,0);
        uVar14 = FUN_02f0ab60(param_1);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar8 = *(undefined4 *)(param_1 + 0x24);
        uVar12 = *(undefined4 *)(param_1 + 0x20);
        if ((int)uVar14 == 0) {
          func_0x014388e4();
          uVar6 = extraout_r1_00;
        }
        func_0x026b30bc((int)uVar14,uVar6,uVar12,uVar8,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x6ca5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

