
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c87590(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_01c87a68 + 0x1c875a8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c87a6c + 0x1c875bc));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a70 + 0x1c875c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a74 + 0x1c875d4));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a78 + 0x1c875e0));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a7c + 0x1c875ec));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a80 + 0x1c875f8));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a84 + 0x1c87604));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a88 + 0x1c87610));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a8c + 0x1c8761c));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a90 + 0x1c87628));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a94 + 0x1c87634));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a98 + 0x1c87640));
    func_0x01438628(*(undefined4 *)(_UNK_01c87a9c + 0x1c8764c));
    func_0x01438628(*(undefined4 *)(_UNK_01c87aa0 + 0x1c87658));
    func_0x01438628(*(undefined4 *)(_UNK_01c87aa4 + 0x1c87664));
    func_0x01438628(*(undefined4 *)(_UNK_01c87aa8 + 0x1c87670));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xad9,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 != 0) {
      iVar11 = 0;
      iVar1 = 0;
      while( true ) {
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar11) break;
        iVar2 = FUN_01c733a0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar11,**(undefined4 **)(_UNK_01c87aac + 0x1c87750));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar2 + 0x10) == '\0') {
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c87ab0 + 0x1c87780));
          func_0x024f0510(iVar3,**(undefined4 **)(_UNK_01c87ab4 + 0x1c87794));
          iVar8 = *(int *)(iVar2 + 0x14);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = func_0x024f19c4(iVar8,**(undefined4 **)(_UNK_01c87ab8 + 0x1c877bc));
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          func_0x024f19d4(&uStack_48,iVar8,**(undefined4 **)(_UNK_01c87abc + 0x1c877ec));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          uStack_2c = uStack_3c;
          while (iVar8 = func_0x0151793c(&uStack_38,**(undefined4 **)(_UNK_01c87ac4 + 0x1c87808)),
                uVar6 = uStack_2c, iVar8 != 0) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar9 = *(int *)(iVar3 + 8);
            uVar10 = *(uint *)(iVar3 + 0xc);
            piVar5 = *(int **)(_UNK_01c87ac0 + 0x1c87848);
            *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
            iVar8 = *piVar5;
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            if (uVar10 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(iVar3 + 0xc) = uVar10 + 1;
              *(undefined4 *)(iVar9 + uVar10 * 4 + 0x10) = uVar6;
            }
            else {
              func_0x024f0520(iVar3,uVar6,
                              *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
            }
          }
          func_0x024f19d8(&uStack_38,**(undefined4 **)(_UNK_01c87ac8 + 0x1c8789c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar2 + 0x14);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          func_0x03b74598(iVar8,**(undefined4 **)(_UNK_01c87ad0 + 0x1c878d4));
          uVar10 = 0;
          iVar8 = 0;
          while( true ) {
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar3 + 0xc) <= iVar8) break;
            iVar9 = *(int *)(iVar2 + 0x14);
            if (*(int *)(**(int **)(_UNK_01c87ad8 + 0x1c87908) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01c87adc + 0x1c87928));
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar12 = func_0x026ffbe0(iVar4,0);
            uVar13 = func_0x024f0530(iVar3,iVar8,**(undefined4 **)(_UNK_01c87ae0 + 0x1c87960));
            uVar6 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if (iVar9 == 0) {
              func_0x014388e4();
              uVar6 = extraout_r1;
            }
            func_0x03b74530(iVar9,uVar6,(uint)uVar12 + uVar10,
                            (int)((ulonglong)uVar12 >> 0x20) + ((int)uVar10 >> 0x1f) +
                            (uint)CARRY4((uint)uVar12,uVar10),(int)uVar13,
                            **(undefined4 **)(_UNK_01c87ae4 + 0x1c8798c));
            uVar10 = uVar10 + 1000;
            iVar8 = iVar8 + 1;
          }
          iVar1 = iVar1 + 1;
          if (1 < iVar1) break;
        }
        iVar11 = iVar11 + 1;
      }
      FUN_01c84820(param_1);
    }
  }
  else {
    iVar1 = func_0x029540a4(0xad9,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

