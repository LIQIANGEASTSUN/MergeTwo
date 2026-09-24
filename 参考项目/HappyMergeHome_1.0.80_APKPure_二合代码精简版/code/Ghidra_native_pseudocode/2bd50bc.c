
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be50bc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
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
  
  pcVar7 = (char *)(_UNK_02be59ac + 0x2be50dc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be59b0 + 0x2be50f4));
    func_0x01438628(*(undefined4 *)(_UNK_02be59b4 + 0x2be5100));
    func_0x01438628(*(undefined4 *)(_UNK_02be59b8 + 0x2be510c));
    func_0x01438628(*(undefined4 *)(_UNK_02be59bc + 0x2be5118));
    func_0x01438628(*(undefined4 *)(_UNK_02be59c0 + 0x2be5124));
    func_0x01438628(*(undefined4 *)(_UNK_02be59c4 + 0x2be5130));
    func_0x01438628(*(undefined4 *)(_UNK_02be59c8 + 0x2be513c));
    func_0x01438628(*(undefined4 *)(_UNK_02be59cc + 0x2be5148));
    func_0x01438628(*(undefined4 *)(_UNK_02be59d0 + 0x2be5154));
    func_0x01438628(*(undefined4 *)(_UNK_02be59d4 + 0x2be5160));
    func_0x01438628(*(undefined4 *)(_UNK_02be59d8 + 0x2be516c));
    func_0x01438628(*(undefined4 *)(_UNK_02be59dc + 0x2be5178));
    func_0x01438628(*(undefined4 *)(_UNK_02be59e0 + 0x2be5184));
    func_0x01438628(*(undefined4 *)(_UNK_02be59e4 + 0x2be5190));
    func_0x01438628(*(undefined4 *)(_UNK_02be59e8 + 0x2be519c));
    func_0x01438628(*(undefined4 *)(_UNK_02be59ec + 0x2be51a8));
    func_0x01438628(*(undefined4 *)(_UNK_02be59f0 + 0x2be51b4));
    func_0x01438628(*(undefined4 *)(_UNK_02be59f4 + 0x2be51c0));
    func_0x01438628(*(undefined4 *)(_UNK_02be59f8 + 0x2be51cc));
    func_0x01438628(*(undefined4 *)(_UNK_02be59fc + 0x2be51d8));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a00 + 0x2be51e4));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a04 + 0x2be51f0));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a08 + 0x2be51fc));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a0c + 0x2be5208));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a10 + 0x2be5214));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a14 + 0x2be5220));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a18 + 0x2be522c));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a1c + 0x2be5238));
    func_0x01438628(*(undefined4 *)(_UNK_02be5a20 + 0x2be5244));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5d22,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d22,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fac90(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a24 + 0x2be52dc));
  func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_02be5a28 + 0x2be52f0));
  iVar2 = FUN_02be46ac(param_1,param_3,param_4,param_5,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x046c2934(&uStack_58,iVar2,**(undefined4 **)(_UNK_02be5a2c + 0x2be5334));
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  puVar10 = *(undefined4 **)(_UNK_02be5a30 + 0x2be5360);
  while (iVar2 = func_0x048a44e0(&uStack_40,*puVar10), uVar8 = uStack_34, iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_02be5a34 + 0x2be537c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02be5a38 + 0x2be539c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x029a6fa8(iVar2,uVar8,0);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02be5a3c + 0x2be53d8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be5a40 + 0x2be53f4));
      uVar8 = *(undefined4 *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0204ff34(iVar3,uVar8,0);
      if ((iVar3 != 0) && ((param_6 < 1 || (*(int *)(iVar2 + 0x30) != param_6)))) {
        uVar8 = *(undefined4 *)(iVar2 + 0x2c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x046ccb14(iVar1,uVar8,**(undefined4 **)(_UNK_02be5a44 + 0x2be545c));
        if (iVar3 == 0) {
          uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a48 + 0x2be547c));
          func_0x024f0510(uVar4,**(undefined4 **)(_UNK_02be5a4c + 0x2be5490));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar1,uVar8,uVar4,**(undefined4 **)(_UNK_02be5a50 + 0x2be54b0));
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x046cc810(iVar1,uVar8,**(undefined4 **)(_UNK_02be5a54 + 0x2be54d8));
        uVar8 = *(undefined4 *)(iVar2 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar3 + 8);
        uVar9 = *(uint *)(iVar3 + 0xc);
        piVar6 = *(int **)(_UNK_02be5a58 + 0x2be5518);
        *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
        iVar11 = *piVar6;
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (uVar9 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar3 + 0xc) = uVar9 + 1;
          *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar8;
        }
        else {
          func_0x024f0520(iVar3,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
      }
    }
  }
  func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02be5a5c + 0x2be556c));
  piVar6 = *(int **)(_UNK_02be5a64 + 0x2be5580);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  if (param_2 == 0) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
    if (iVar3 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar6;
      }
      uVar8 = **(undefined4 **)(iVar2 + 0x5c);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a88 + 0x2be5768));
      func_0x04a563c8(iVar3,uVar8,**(undefined4 **)(_UNK_02be5a8c + 0x2be5788),0);
      piVar5 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x20);
      *piVar5 = iVar3;
      func_0x014385cc(piVar5,iVar3);
    }
    uVar8 = func_0x03617844(iVar1,iVar3,**(undefined4 **)(_UNK_02be5a90 + 0x2be57b4));
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar6;
      }
      uVar4 = **(undefined4 **)(iVar1 + 0x5c);
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a94 + 0x2be580c));
      func_0x04a563c8(iVar2,uVar4,**(undefined4 **)(_UNK_02be5a98 + 0x2be582c),0);
      piVar5 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x24);
      *piVar5 = iVar2;
      func_0x014385cc(piVar5,iVar2);
      iVar1 = *piVar6;
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x28);
    if (iVar3 != 0) goto LAB_02be58d0;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    uVar4 = **(undefined4 **)(iVar1 + 0x5c);
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a9c + 0x2be5894));
    func_0x04a5647c(iVar3,uVar4,**(undefined4 **)(_UNK_02be5aa0 + 0x2be58b4),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x28);
    *piVar6 = iVar3;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x14);
    if (iVar3 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar6;
      }
      uVar8 = **(undefined4 **)(iVar2 + 0x5c);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a68 + 0x2be55d4));
      func_0x04a563c8(iVar3,uVar8,**(undefined4 **)(_UNK_02be5a6c + 0x2be55f4),0);
      piVar5 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x14);
      *piVar5 = iVar3;
      func_0x014385cc(piVar5,iVar3);
    }
    uVar8 = func_0x03617d9c(iVar1,iVar3,**(undefined4 **)(_UNK_02be5a70 + 0x2be5620));
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    iVar2 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar6;
      }
      uVar4 = **(undefined4 **)(iVar1 + 0x5c);
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a74 + 0x2be5678));
      func_0x04a563c8(iVar2,uVar4,**(undefined4 **)(_UNK_02be5a78 + 0x2be5698),0);
      piVar5 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x18);
      *piVar5 = iVar2;
      func_0x014385cc(piVar5,iVar2);
      iVar1 = *piVar6;
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c);
    if (iVar3 != 0) goto LAB_02be58d0;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    uVar4 = **(undefined4 **)(iVar1 + 0x5c);
    iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02be5a7c + 0x2be5700));
    func_0x04a5647c(iVar3,uVar4,**(undefined4 **)(_UNK_02be5a80 + 0x2be5720),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 0x1c);
    *piVar6 = iVar3;
  }
  func_0x014385cc(piVar6,iVar3);
LAB_02be58d0:
  func_0x03624020(uVar8,iVar2,iVar3,**(undefined4 **)(_UNK_02be5aa4 + 0x2be58e4));
  return;
}

