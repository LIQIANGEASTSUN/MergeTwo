
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0268be6c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  code *pcVar10;
  int *piVar11;
  uint uVar12;
  uint auStack_30 [3];
  
  pcVar8 = (char *)(_UNK_0268c5d8 + 0x268be84);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0268c5dc + 0x268be98));
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
    *pcVar8 = '\x01';
  }
  piVar1 = (int *)func_0x024ef924(param_1,0);
  if (piVar1 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar2 = (**(code **)(*piVar1 + 0x440))(piVar1,0x34,*(undefined4 *)(*piVar1 + 0x444));
  uVar12 = 0;
  piVar1 = *(int **)(_UNK_0268c634 + 0x268bfec);
  do {
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar12) {
      return;
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar12) {
      func_0x014388e8();
    }
    piVar11 = *(int **)(iVar2 + 0x10 + uVar12 * 4);
    if (piVar11 == (int *)0x0) {
      func_0x014388e4();
    }
    piVar3 = (int *)(**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
    uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
    uVar9 = **(undefined4 **)(_UNK_0268c638 + 0x268c05c);
    if (*(int *)(*piVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar9 = func_0x024ef3e8(uVar9,0);
    iVar5 = func_0x024f22c0(uVar4,uVar9,0);
    if (iVar5 == 0) {
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c640 + 0x268c0e0);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0268c644 + 0x268c120);
LAB_0268c11c:
        uVar4 = *puVar6;
LAB_0268c198:
        auStack_30[0] = 0;
LAB_0268c19c:
        uVar4 = func_0x014387ac(uVar4,auStack_30);
        pcVar10 = *(code **)(*piVar11 + 0x198);
        uVar9 = *(undefined4 *)(*piVar11 + 0x19c);
        goto LAB_0268c1b8;
      }
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c648 + 0x268c150);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0268c64c + 0x268c190);
LAB_0268c18c:
        uVar4 = *puVar6;
        auStack_30[1] = 0;
        goto LAB_0268c198;
      }
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c650 + 0x268c1f8);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0268c654 + 0x268c238);
        goto LAB_0268c11c;
      }
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c658 + 0x268c260);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0268c65c + 0x268c2a0);
        goto LAB_0268c18c;
      }
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c660 + 0x268c2c8);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0268c664 + 0x268c308);
        goto LAB_0268c11c;
      }
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c668 + 0x268c330);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        puVar6 = *(undefined4 **)(_UNK_0268c66c + 0x268c370);
        goto LAB_0268c18c;
      }
      uVar4 = (**(code **)(*piVar11 + 0x140))(piVar11,*(undefined4 *)(*piVar11 + 0x144));
      uVar9 = **(undefined4 **)(_UNK_0268c670 + 0x268c398);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar9 = func_0x024ef3e8(uVar9,0);
      iVar5 = func_0x024f22c0(uVar4,uVar9,0);
      if (iVar5 != 0) {
        auStack_30[0] = auStack_30[0] & 0xffffff00;
        uVar4 = **(undefined4 **)(_UNK_0268c674 + 0x268c3dc);
        goto LAB_0268c19c;
      }
      uVar4 = **(undefined4 **)(_UNK_0268c678 + 0x268c3f4);
      if (*(int *)(*piVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar4 = func_0x024ef3e8(uVar4,0);
      if (piVar3 == (int *)0x0) {
        func_0x014388e4();
      }
      iVar5 = (**(code **)(*piVar3 + 0x168))(piVar3,uVar4,*(undefined4 *)(*piVar3 + 0x16c));
      if (iVar5 == 0) {
        iVar5 = (**(code **)(*piVar3 + 0x200))(piVar3,*(undefined4 *)(*piVar3 + 0x204));
        if (iVar5 != 0) {
          uVar4 = (**(code **)(*piVar3 + 0x240))(piVar3,*(undefined4 *)(*piVar3 + 0x244));
          uVar9 = **(undefined4 **)(_UNK_0268c67c + 0x268c484);
          if (*(int *)(*piVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar9 = func_0x024ef3e8(uVar9,0);
          iVar5 = func_0x024f22c0(uVar4,uVar9,0);
          if (iVar5 != 0) goto LAB_0268c530;
        }
        iVar5 = (**(code **)(*piVar3 + 0x200))(piVar3,*(undefined4 *)(*piVar3 + 0x204));
        if (iVar5 != 0) {
          uVar4 = (**(code **)(*piVar3 + 0x240))(piVar3,*(undefined4 *)(*piVar3 + 0x244));
          uVar9 = **(undefined4 **)(_UNK_0268c680 + 0x268c4fc);
          if (*(int *)(*piVar1 + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar9 = func_0x024ef3e8(uVar9,0);
          iVar5 = func_0x024f22c0(uVar4,uVar9,0);
          if (iVar5 != 0) goto LAB_0268c530;
        }
      }
      else {
LAB_0268c530:
        iVar5 = (**(code **)(*piVar11 + 0x188))(piVar11,param_1,0,*(undefined4 *)(*piVar11 + 0x18c))
        ;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024ef924(iVar5,0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = func_0x024f03e4(iVar7,**(undefined4 **)(_UNK_0268c684 + 0x268c588),0);
        uVar4 = func_0x014386f0(**(undefined4 **)(_UNK_0268c688 + 0x268c5a4),0);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        func_0x024f1c98(iVar7,iVar5,uVar4,0);
      }
    }
    else {
      pcVar10 = *(code **)(*piVar11 + 0x198);
      uVar9 = *(undefined4 *)(*piVar11 + 0x19c);
      uVar4 = **(undefined4 **)(**(int **)(_UNK_0268c63c + 0x268c09c) + 0x5c);
LAB_0268c1b8:
      (*pcVar10)(piVar11,param_1,uVar4,0,uVar9);
    }
    uVar12 = uVar12 + 1;
  } while( true );
}

