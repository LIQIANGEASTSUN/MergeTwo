
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c0ef70(int param_1)

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
  
  pcVar5 = (char *)(_UNK_01c0f7cc + 0x1c0ef88);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7d0 + 0x1c0ef9c));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7d4 + 0x1c0efa8));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7d8 + 0x1c0efb4));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7dc + 0x1c0efc0));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7e0 + 0x1c0efcc));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7e4 + 0x1c0efd8));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7e8 + 0x1c0efe4));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7ec + 0x1c0eff0));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7f0 + 0x1c0effc));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7f4 + 0x1c0f008));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7f8 + 0x1c0f014));
    func_0x01438628(*(undefined4 *)(_UNK_01c0f7fc + 0x1c0f020));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0xaaf3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x015fcde8(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
      iVar1 = FUN_01c0e5e0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x01523ccc(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 0x10),0);
      uVar14 = FUN_01c0e5e0(param_1);
      uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
      iVar2 = (int)uVar14;
      if (iVar1 == 0) {
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x0268be6c(iVar2,0);
        iVar1 = FUN_01c0e5e0(param_1);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b2e5c(iVar1,uVar6,0);
        uVar14 = FUN_01c0e5e0(param_1);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar8 = *(undefined4 *)(param_1 + 0x18);
        uVar12 = *(undefined4 *)(param_1 + 0x1c);
        if ((int)uVar14 == 0) {
          func_0x014388e4();
          uVar6 = extraout_r1_01;
        }
        func_0x026b2fec((int)uVar14,uVar6,uVar8,uVar12,0);
        uVar14 = FUN_01c0e5e0(param_1);
        uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar12 = *(undefined4 *)(param_1 + 0x24);
        if ((int)uVar14 == 0) {
          func_0x014388e4();
          uVar6 = extraout_r1_02;
        }
        func_0x026b30bc((int)uVar14,uVar6,uVar8,uVar12,0);
        iVar1 = FUN_01c0e5e0(param_1);
        iVar2 = FUN_01c0e5e0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar13 = *(uint *)(iVar2 + 0x10);
        iVar2 = *(int *)(iVar2 + 0x14);
        if (*(int *)(**(int **)(_UNK_01c0f800 + 0x1c0f210) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar11 = *(undefined4 **)(_UNK_01c0f804 + 0x1c0f234);
        iVar3 = func_0x014e9518(*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x020b151c(iVar3,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        puVar10 = *(undefined4 **)(_UNK_01c0f808 + 0x1c0f278);
        iVar3 = func_0x0152983c(iVar3,0,*puVar10);
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
        if (*(int *)(**(int **)(_UNK_01c0f80c + 0x1c0f2c8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_01c0f810 + 0x1c0f2e4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020e9710(iVar1,0);
        iVar2 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0x150);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x026b2f30(iVar2,uVar6,0);
        iVar1 = FUN_01c0e5e0(param_1);
        iVar2 = func_0x014e9518(*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        puVar9 = *(undefined4 **)(_UNK_01c0f814 + 0x1c0f388);
        iVar2 = func_0x0152983c(iVar2,0,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b33d4(iVar1,uVar6,0);
        iVar1 = FUN_01c0e5e0(param_1);
        iVar2 = func_0x014e9518(*puVar11);
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
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b325c(iVar1,1,0);
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x3c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puVar7 = *(undefined4 **)(_UNK_01c0f818 + 0x1c0f470);
        func_0x03b75c84(iVar1,*puVar7);
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b75c84(iVar1,*puVar7);
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b3618(iVar1,0,0);
        iVar1 = FUN_01c0e5e0(param_1);
        iVar2 = func_0x014e9518(*puVar11);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x0152983c(iVar2,0,*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        if (*(int *)(**(int **)(_UNK_01c0f81c + 0x1c0f530) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar6 = func_0x03649964(uVar6,**(undefined4 **)(_UNK_01c0f820 + 0x1c0f550));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b3318(iVar1,uVar6,0);
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026b354c(iVar1,0,0);
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x50);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        puVar9 = *(undefined4 **)(_UNK_01c0f824 + 0x1c0f5d8);
        func_0x03b70d24(iVar1,*puVar9);
        iVar1 = FUN_01c0e5e0(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x54);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b70d24(iVar1,*puVar9);
        func_0x01c0f830(param_1);
        iVar2 = **(int **)(**(int **)(_UNK_01c0f828 + 0x1c0f624) + 0x5c);
        iVar1 = func_0x014e9518(*puVar11);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x020b151c(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0152983c(iVar1,0,*puVar10);
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
        func_0x02e64460(iVar2,0x3a2,uVar6,uStack_34,uStack_48,uStack_44,uStack_40,uStack_3c,
                        uStack_38,uStack_34,uStack_30,uStack_2c,1,0,0,0);
        if (*(int *)(**(int **)(_UNK_01c0f82c + 0x1c0f718) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uStack_28 = func_0x01c0f9c8(param_1);
        uVar6 = func_0x01524ffc(&uStack_28,0);
        iVar2 = FUN_01c0e5e0(param_1);
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
        uVar14 = FUN_01c0e5e0(param_1);
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
    iVar1 = func_0x029540a4(0xaaf3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

