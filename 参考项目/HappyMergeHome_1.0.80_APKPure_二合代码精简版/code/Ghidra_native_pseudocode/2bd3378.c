
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be3378(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_02be3994 + 0x2be3394);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be3998 + 0x2be33a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be399c + 0x2be33b4));
    func_0x01438628(*(undefined4 *)(_UNK_02be39a0 + 0x2be33c0));
    func_0x01438628(*(undefined4 *)(_UNK_02be39a4 + 0x2be33cc));
    func_0x01438628(*(undefined4 *)(_UNK_02be39a8 + 0x2be33d8));
    func_0x01438628(*(undefined4 *)(_UNK_02be39ac + 0x2be33e4));
    func_0x01438628(*(undefined4 *)(_UNK_02be39b0 + 0x2be33f0));
    func_0x01438628(*(undefined4 *)(_UNK_02be39b4 + 0x2be33fc));
    func_0x01438628(*(undefined4 *)(_UNK_02be39b8 + 0x2be3408));
    func_0x01438628(*(undefined4 *)(_UNK_02be39bc + 0x2be3414));
    func_0x01438628(*(undefined4 *)(_UNK_02be39c0 + 0x2be3420));
    func_0x01438628(*(undefined4 *)(_UNK_02be39c4 + 0x2be342c));
    func_0x01438628(*(undefined4 *)(_UNK_02be39c8 + 0x2be3438));
    func_0x01438628(*(undefined4 *)(_UNK_02be39cc + 0x2be3444));
    func_0x01438628(*(undefined4 *)(_UNK_02be39d0 + 0x2be3450));
    func_0x01438628(*(undefined4 *)(_UNK_02be39d4 + 0x2be345c));
    func_0x01438628(*(undefined4 *)(_UNK_02be39d8 + 0x2be3468));
    func_0x01438628(*(undefined4 *)(_UNK_02be39dc + 0x2be3474));
    func_0x01438628(*(undefined4 *)(_UNK_02be39e0 + 0x2be3480));
    func_0x01438628(*(undefined4 *)(_UNK_02be39e4 + 0x2be348c));
    func_0x01438628(*(undefined4 *)(_UNK_02be39e8 + 0x2be3498));
    func_0x01438628(*(undefined4 *)(_UNK_02be39ec + 0x2be34a4));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5d1b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046ccaa4(iVar1,**(undefined4 **)(_UNK_02be39f0 + 0x2be352c));
    iVar1 = 0;
    puVar12 = *(undefined4 **)(_UNK_02be39f4 + 0x2be3544);
    while( true ) {
      iVar2 = FUN_02bad050(param_1,param_2);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 0xc) <= iVar1) break;
      iVar2 = FUN_02bad050(param_1,param_2);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar12);
      if (*(int *)(**(int **)(_UNK_02be39f8 + 0x2be35c4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be39fc + 0x2be35e0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(undefined4 *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x029a6fa8(iVar3,uVar8,0);
      if (iVar3 != 0) {
        if (*(int *)(**(int **)(_UNK_02be3a00 + 0x2be362c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02be3a04 + 0x2be3648));
        uVar8 = *(undefined4 *)(iVar2 + 8);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x02c4a88c(iVar4,uVar8,0);
        if ((iVar4 != 0) && (*(int *)(iVar2 + 0xc) == 1)) {
          iVar2 = *(int *)(param_1 + 0x34);
          uVar8 = *(undefined4 *)(iVar3 + 0x30);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x046ccb14(iVar2,uVar8,**(undefined4 **)(_UNK_02be3a08 + 0x2be36a8));
          if (iVar2 == 0) {
            uVar9 = *(undefined4 *)(iVar3 + 0x30);
            iVar2 = *(int *)(param_1 + 0x34);
            uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02be3a0c + 0x2be36c4));
            func_0x024eed9c(uVar8,**(undefined4 **)(_UNK_02be3a10 + 0x2be36e0));
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x046cc8a0(iVar2,uVar9,uVar8,**(undefined4 **)(_UNK_02be3a14 + 0x2be3708));
          }
          iVar2 = *(int *)(param_1 + 0x34);
          uVar8 = *(undefined4 *)(iVar3 + 0x30);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x046cc810(iVar2,uVar8,**(undefined4 **)(_UNK_02be3a18 + 0x2be3734));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar2 + 8);
          uVar10 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_02be3a1c + 0x2be376c);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar13 = *piVar6;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          if (uVar10 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar10 + 1;
            piVar6 = (int *)(iVar4 + uVar10 * 4 + 0x10);
            *piVar6 = iVar3;
            func_0x014385cc(piVar6,iVar3);
          }
          else {
            func_0x0152874c(iVar2,iVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
          }
          puVar12 = *(undefined4 **)(_UNK_02be3a20 + 0x2be37c4);
        }
      }
      iVar1 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046ccdcc(&uStack_58,iVar1,**(undefined4 **)(_UNK_02be3a24 + 0x2be37ec));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar12 = *(undefined4 **)(_UNK_02be3a28 + 0x2be3818);
    piVar6 = *(int **)(_UNK_02be3a2c + 0x2be3820);
    puVar14 = *(undefined4 **)(_UNK_02be3a30 + 0x2be3828);
    puVar11 = *(undefined4 **)(_UNK_02be3a34 + 0x2be3830);
    while (iVar1 = func_0x048a60cc(&uStack_40,*puVar12), iVar1 != 0) {
      iVar2 = *piVar6;
      iVar1 = (int)uStack_30;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4(iVar2);
        iVar2 = *piVar6;
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
      if (iVar3 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4(iVar2);
          iVar2 = *piVar6;
        }
        uVar8 = **(undefined4 **)(iVar2 + 0x5c);
        iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be3a38 + 0x2be389c));
        func_0x045f9b8c(iVar3,uVar8,*puVar14,0);
        piVar5 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x10);
        *piVar5 = iVar3;
        func_0x014385cc(piVar5,iVar3);
      }
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f11a0(iVar1,iVar3,*puVar11);
    }
    func_0x048a6218(&uStack_40,**(undefined4 **)(_UNK_02be3a3c + 0x2be38f4));
  }
  else {
    iVar1 = func_0x029540a4(0x5d1b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bced4(iVar1,param_1,param_2,0);
  }
  return;
}

