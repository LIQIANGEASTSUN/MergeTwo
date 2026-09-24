
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018f9e38(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [4];
  
  pcVar5 = (char *)(_UNK_018f9ebc + 0x18f9e48);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f9ec0 + 0x18f9e5c));
    func_0x01438628(*(undefined4 *)(_UNK_018f9ec4 + 0x18f9e68));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018f9ec8 + 0x18f9e7c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_018f9ecc + 0x18f9e98));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_018f76a0 + 0x18f7448);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f76a4 + 0x18f745c));
    func_0x01438628(*(undefined4 *)(_UNK_018f76a8 + 0x18f7468));
    func_0x01438628(*(undefined4 *)(_UNK_018f76ac + 0x18f7474));
    func_0x01438628(*(undefined4 *)(_UNK_018f76b0 + 0x18f7480));
    func_0x01438628(*(undefined4 *)(_UNK_018f76b4 + 0x18f748c));
    func_0x01438628(*(undefined4 *)(_UNK_018f76b8 + 0x18f7498));
    func_0x01438628(*(undefined4 *)(_UNK_018f76bc + 0x18f74a4));
    func_0x01438628(*(undefined4 *)(_UNK_018f76c0 + 0x18f74b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9661,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9661,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,0,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,iVar2,0);
    func_0x01523a1c(&puStack_38,0,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    iVar2 = func_0x024f56d0(iVar6,uVar9,&puStack_38,uVar4,0,0);
    return iVar2;
  }
  if (*(int *)(**(int **)(_UNK_018f76c4 + 0x18f750c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018f76c8 + 0x18f7528));
  piVar7 = *(int **)(_UNK_018f76cc + 0x18f753c);
  iVar6 = *piVar7;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar7;
  }
  uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x6e4);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x02b0fc08(iVar1,uVar9,0);
  if (*(int *)(**(int **)(_UNK_018f76d0 + 0x18f7584) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar9,0,0);
  if (iVar1 == 0) {
    func_0x018f76e4(iVar2);
    func_0x018f7a8c(iVar2);
    if (*(int *)(**(int **)(_UNK_018f76d4 + 0x18f75c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_018f76d8 + 0x18f75e4));
    piVar7 = *(int **)(_UNK_018f76dc + 0x18f75f8);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    iVar8 = **(int **)(_UNK_018f76e0 + 0x18f7618);
    iVar6 = *(int *)(iVar8 + 0x1c);
    uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x324);
    if (iVar6 == 0) {
      func_0x014909d8(iVar8);
      iVar6 = *(int *)(iVar8 + 0x1c);
    }
    iVar1 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
    aiStack_24[0] = iVar2;
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar5 = '\x01';
    }
    uStack_28 = 0;
    uStack_2c = 0;
    iVar1 = func_0x02953fd4(0x226,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar2 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x04753c80(iVar1,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      iVar1 = 0;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar2 + 0x14);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0475399c(iVar6,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar6 != 0) {
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f2f10(iVar1,0);
          if (iVar1 == 0) {
            iVar2 = *(int *)(iVar2 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024f2f20(iVar2,200,0);
            if (iVar2 == 0) {
              return 0;
            }
          }
          puStack_34 = &uStack_28;
          puStack_38 = &uStack_30;
          piStack_3c = aiStack_24;
          uStack_40 = 0;
          uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar3,uVar9,uVar4);
          iVar2 = *(int *)(aiStack_24[0] + 0x18);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar2,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          iVar1 = 1;
        }
      }
    }
    else {
      iVar1 = func_0x029540a4(0x226,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      iVar1 = func_0x02871898(iVar1,iVar2,uVar9,uVar4);
    }
    return iVar1;
  }
  return iVar1;
}

