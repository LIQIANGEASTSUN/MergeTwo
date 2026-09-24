
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5ccd8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c5d5fc + 0x2c5ccf4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5d600 + 0x2c5cd08));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d604 + 0x2c5cd14));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d608 + 0x2c5cd20));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d60c + 0x2c5cd2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d610 + 0x2c5cd38));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d614 + 0x2c5cd44));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d618 + 0x2c5cd50));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d61c + 0x2c5cd5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d620 + 0x2c5cd68));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d624 + 0x2c5cd74));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d628 + 0x2c5cd80));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d62c + 0x2c5cd8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d630 + 0x2c5cd98));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d634 + 0x2c5cda4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d638 + 0x2c5cdb0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d63c + 0x2c5cdbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d640 + 0x2c5cdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d644 + 0x2c5cdd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d648 + 0x2c5cde0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d64c + 0x2c5cdec));
    func_0x01438628(*(undefined4 *)(_UNK_02c5d650 + 0x2c5cdf8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5c5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5c5f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = iStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar5);
    return;
  }
  if (param_2 != -1) {
    if (*(int *)(**(int **)(_UNK_02c5d654 + 0x2c5ce60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5d658 + 0x2c5ce7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0202998c(iVar1,0xd,0,0);
    iVar7 = **(int **)(**(int **)(_UNK_02c5d65c + 0x2c5ceb4) + 0x5c);
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024eff78(iVar1,0);
    iVar2 = func_0x024eecb8(param_1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x024f0474(&uStack_30,iVar2,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f17b4(&uStack_40,iVar1,(undefined4)uStack_30,uStack_30._4_4_,uStack_28,0);
    uStack_30 = CONCAT44(uStack_3c,uStack_40);
    uStack_28 = uStack_38;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar1 = **(int **)(_UNK_02c5d660 + 0x2c5cf6c);
    *(undefined4 *)(iVar7 + 0x94) = uStack_28;
    *(undefined8 *)(iVar7 + 0x8c) = uStack_30;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5d664 + 0x2c5cf98));
    piVar8 = *(int **)(_UNK_02c5d668 + 0x2c5cfac);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x14);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c5d66c + 0x2c5cfd0),2);
    pcVar6 = (char *)(_UNK_02c5d670 + 0x2c5cfec);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c5d674 + 0x2c5d000));
      *pcVar6 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_02c5d678 + 0x2c5d014) + 0x5c);
    uStack_40 = *puVar4;
    uStack_3c = puVar4[1];
    iVar7 = func_0x014387ac(**(int **)(_UNK_02c5d678 + 0x2c5d014),&uStack_40);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar7 != 0) && (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar7;
    func_0x014385cc(piVar8 + 4,iVar7);
    uStack_44 = FUN_02c59e5c(param_1);
    iVar7 = func_0x014387ac(**(undefined4 **)(_UNK_02c5d67c + 0x2c5d0a0),&uStack_44);
    if ((iVar7 != 0) && (iVar2 = func_0x014387a8(iVar7,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 2) {
      func_0x014388e8();
    }
    piVar8[5] = iVar7;
    func_0x014385cc(piVar8 + 5,iVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar1,uVar9,piVar8,0);
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar9 = func_0x024f5ff0(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02c5d680 + 0x2c5d158) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar4 = *(undefined4 **)(_UNK_02c5d684 + 0x2c5d174);
    iVar1 = func_0x014e9518(*puVar4);
    uVar5 = FUN_02c59e5c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02bd7f00(iVar1,uVar9,uVar5,0);
    iVar7 = func_0x014e9518(*puVar4);
    uVar5 = FUN_02c59e5c(param_1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    FUN_02bdff00(iVar7,uVar9,param_2,uVar5,0);
    iVar7 = **(int **)(**(int **)(_UNK_02c5d688 + 0x2c5d1f8) + 0x5c);
    puVar4 = *(undefined4 **)(_UNK_02c5d68c + 0x2c5d210);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02b91504(iVar7,uVar9,0);
    iVar7 = func_0x014e9518(*puVar4);
    uVar9 = *(undefined4 *)(*(int *)(**(int **)(_UNK_02c5d690 + 0x2c5d23c) + 0x5c) + 8);
    piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02c5d694 + 0x2c5d24c),5);
    uStack_48 = FUN_02c59e5c(param_1);
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02c5d698 + 0x2c5d270),&uStack_48);
    if (piVar8 == (int *)0x0) {
      func_0x014388e4();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if (piVar8[3] == 0) {
      func_0x014388e8();
    }
    piVar8[4] = iVar2;
    func_0x014385cc(piVar8 + 4,iVar2);
    puVar4 = *(undefined4 **)(_UNK_02c5d69c + 0x2c5d2ec);
    iStack_4c = param_2;
    iVar2 = func_0x014387ac(*puVar4,&iStack_4c);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 2) {
      func_0x014388e8();
    }
    piVar8[5] = iVar2;
    func_0x014385cc(piVar8 + 5,iVar2);
    uStack_50 = 0xffffffff;
    iVar2 = func_0x014387ac(*puVar4,&uStack_50);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 3) {
      func_0x014388e8();
    }
    piVar8[6] = iVar2;
    func_0x014385cc(piVar8 + 6,iVar2);
    uStack_54 = 6;
    iVar2 = func_0x014387ac(**(undefined4 **)(_UNK_02c5d6a0 + 0x2c5d3b8),&uStack_54);
    if ((iVar2 != 0) && (iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar3 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 4) {
      func_0x014388e8();
    }
    piVar8[7] = iVar2;
    func_0x014385cc(piVar8 + 7,iVar2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_58 = *(undefined4 *)(iVar1 + 8);
    iVar1 = func_0x014387ac(*puVar4,&uStack_58);
    if ((iVar1 != 0) && (iVar2 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar2 == 0)
       ) {
      uVar5 = func_0x01438904();
      func_0x01438790(uVar5,0);
    }
    if ((uint)piVar8[3] < 5) {
      func_0x014388e8();
    }
    piVar8[8] = iVar1;
    func_0x014385cc(piVar8 + 8,iVar1);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x02990414(iVar7,uVar9,piVar8,0);
    if (*(int *)(**(int **)(_UNK_02c5d6a4 + 0x2c5d4b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5d6a8 + 0x2c5d4cc));
    piVar8 = *(int **)(_UNK_02c5d6ac + 0x2c5d4e0);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar8;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x160);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0374c388(iVar1,uVar9,**(undefined4 **)(_UNK_02c5d6b0 + 0x2c5d518));
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x58);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar7 = *(int *)(iVar1 + 8);
      uVar10 = *(uint *)(iVar1 + 0xc);
      piVar8 = *(int **)(_UNK_02c5d6b4 + 0x2c5d558);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar2 = *piVar8;
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      if (uVar10 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar10 + 1;
        *(int *)(iVar7 + uVar10 * 4 + 0x10) = param_2;
      }
      else {
        func_0x024f0520(iVar1,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
      }
    }
    if (*(int *)(**(int **)(_UNK_02c5d6b8 + 0x2c5d5a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03b2c734(**(undefined4 **)(_UNK_02c5d6bc + 0x2c5d5c4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    FUN_02c3e4a4(iVar1,2,0,0,0);
  }
  return;
}

