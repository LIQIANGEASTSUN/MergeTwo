
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164ddd8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x02953fd4(0x2025,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2025,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  iVar1 = FUN_01642704(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar7 = (char *)(_UNK_0268c5d8 + 0x268be84);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0268c5dc + 0x268be98),0);
    func_0x01438628(*(undefined4 *)(_UNK_0268c5e0 + 0x268bea4));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5e4 + 0x268beb0));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5e8 + 0x268bebc));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5ec + 0x268bec8));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5f0 + 0x268bed4));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5f4 + 0x268bee0));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5f8 + 0x268beec));
    func_0x01438628(*(undefined4 *)(_UNK_0268c5fc + 0x268bef8));
    func_0x01438628(*(undefined4 *)(_UNK_0268c600 + 0x268bf04));
    func_0x01438628(*(undefined4 *)(_UNK_0268c604 + 0x268bf10));
    func_0x01438628(*(undefined4 *)(_UNK_0268c608 + 0x268bf1c));
    func_0x01438628(*(undefined4 *)(_UNK_0268c60c + 0x268bf28));
    func_0x01438628(*(undefined4 *)(_UNK_0268c610 + 0x268bf34));
    func_0x01438628(*(undefined4 *)(_UNK_0268c614 + 0x268bf40));
    func_0x01438628(*(undefined4 *)(_UNK_0268c618 + 0x268bf4c));
    func_0x01438628(*(undefined4 *)(_UNK_0268c61c + 0x268bf58));
    func_0x01438628(*(undefined4 *)(_UNK_0268c620 + 0x268bf64));
    func_0x01438628(*(undefined4 *)(_UNK_0268c624 + 0x268bf70));
    func_0x01438628(*(undefined4 *)(_UNK_0268c628 + 0x268bf7c));
    func_0x01438628(*(undefined4 *)(_UNK_0268c62c + 0x268bf88));
    func_0x01438628(*(undefined4 *)(_UNK_0268c630 + 0x268bf94));
    *pcVar7 = '\x01';
  }
  iStack_34 = iVar1;
  piVar2 = (int *)func_0x024ef924(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar1 = (**(code **)(*piVar2 + 0x440))(piVar2,0x34,*(undefined4 *)(*piVar2 + 0x444));
  uVar12 = 0;
  piVar2 = *(int **)(_UNK_0268c634 + 0x268bfec);
  do {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar12) {
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar12) {
      func_0x014388e8();
    }
    piVar11 = *(int **)(iVar1 + 0x10 + uVar12 * 4);
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    piVar3 = (int *)(**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
    uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
    uVar6 = **(undefined4 **)(_UNK_0268c638 + 0x268c05c);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = func_0x024ef3e8(uVar6,0);
    iVar8 = func_0x024f22c0(uVar10,uVar6,0);
    if (iVar8 == 0) {
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c640 + 0x268c0e0);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        puVar4 = *(undefined4 **)(_UNK_0268c644 + 0x268c120);
LAB_0268c11c:
        uVar10 = *puVar4;
LAB_0268c198:
        uStack_30 = 0;
LAB_0268c19c:
        uVar10 = func_0x014387ac(uVar10,&uStack_30);
        pcVar9 = *(code **)(*piVar11 + 0x198);
        uStack_38 = *(undefined4 *)(*piVar11 + 0x19c);
        goto LAB_0268c1b8;
      }
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c648 + 0x268c150);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        puVar4 = *(undefined4 **)(_UNK_0268c64c + 0x268c190);
LAB_0268c18c:
        uVar10 = *puVar4;
        uStack_2c = 0;
        goto LAB_0268c198;
      }
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c650 + 0x268c1f8);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        puVar4 = *(undefined4 **)(_UNK_0268c654 + 0x268c238);
        goto LAB_0268c11c;
      }
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c658 + 0x268c260);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        puVar4 = *(undefined4 **)(_UNK_0268c65c + 0x268c2a0);
        goto LAB_0268c18c;
      }
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c660 + 0x268c2c8);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        puVar4 = *(undefined4 **)(_UNK_0268c664 + 0x268c308);
        goto LAB_0268c11c;
      }
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c668 + 0x268c330);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        puVar4 = *(undefined4 **)(_UNK_0268c66c + 0x268c370);
        goto LAB_0268c18c;
      }
      uVar10 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar6 = **(undefined4 **)(_UNK_0268c670 + 0x268c398);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar6 = func_0x024ef3e8(uVar6,0);
      iVar8 = func_0x024f22c0(uVar10,uVar6,0);
      if (iVar8 != 0) {
        uStack_30 = uStack_30 & 0xffffff00;
        uVar10 = **(undefined4 **)(_UNK_0268c674 + 0x268c3dc);
        goto LAB_0268c19c;
      }
      uVar10 = **(undefined4 **)(_UNK_0268c678 + 0x268c3f4);
      if (*(int *)(*piVar2 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar10 = func_0x024ef3e8(uVar10,0);
      if (piVar3 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar8 = (**(code **)(*piVar3 + 0x168))(piVar3,uVar10,*(undefined4 *)(*piVar3 + 0x16c));
      if (iVar8 == 0) {
        iVar8 = (**(code **)(*piVar3 + 0x200))(piVar3,*(undefined4 *)(*piVar3 + 0x204));
        if (iVar8 != 0) {
          uVar10 = (**(code **)(*piVar3 + 0x240))(piVar3,*(undefined4 *)(*piVar3 + 0x244));
          uVar6 = **(undefined4 **)(_UNK_0268c67c + 0x268c484);
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar6 = func_0x024ef3e8(uVar6,0);
          iVar8 = func_0x024f22c0(uVar10,uVar6,0);
          if (iVar8 != 0) goto LAB_0268c530;
        }
        iVar8 = (**(code **)(*piVar3 + 0x200))(piVar3,*(undefined4 *)(*piVar3 + 0x204));
        if (iVar8 != 0) {
          uVar10 = (**(code **)(*piVar3 + 0x240))(piVar3,*(undefined4 *)(*piVar3 + 0x244));
          uVar6 = **(undefined4 **)(_UNK_0268c680 + 0x268c4fc);
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar6 = func_0x024ef3e8(uVar6,0);
          iVar8 = func_0x024f22c0(uVar10,uVar6,0);
          if (iVar8 != 0) goto LAB_0268c530;
        }
      }
      else {
LAB_0268c530:
        iVar8 = (**(code **)(*piVar11 + 0x188))
                          (piVar11,iStack_34,0,*(undefined4 *)(*piVar11 + 0x18c));
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024ef924(iVar8,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f03e4(iVar5,**(undefined4 **)(_UNK_0268c684 + 0x268c588),0);
        uVar10 = func_0x014386f0(**(undefined4 **)(_UNK_0268c688 + 0x268c5a4),0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x024f1c98(iVar5,iVar8,uVar10,0);
      }
    }
    else {
      pcVar9 = *(code **)(*piVar11 + 0x198);
      uStack_38 = *(undefined4 *)(*piVar11 + 0x19c);
      uVar10 = **(undefined4 **)(**(int **)(_UNK_0268c63c + 0x268c09c) + 0x5c);
LAB_0268c1b8:
      (*pcVar9)(piVar11,iStack_34,uVar10,0);
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

