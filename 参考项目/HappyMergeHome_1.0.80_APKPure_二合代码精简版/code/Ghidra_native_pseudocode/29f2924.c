
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a02924(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  pcVar5 = (char *)(_UNK_02a02a5c + 0x2a02938);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a02a60 + 0x2a0294c));
    func_0x01438628(*(undefined4 *)(_UNK_02a02a64 + 0x2a02958));
    func_0x01438628(*(undefined4 *)(_UNK_02a02a68 + 0x2a02964));
    func_0x01438628(*(undefined4 *)(_UNK_02a02a6c + 0x2a02970));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  FUN_02a00834(iVar6,uVar4);
  if (*(int *)(**(int **)(_UNK_02a02a70 + 0x2a029a4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_02a02a74 + 0x2a029c0));
  iVar7 = **(int **)(_UNK_02a02a78 + 0x2a029d4);
  iVar2 = *(int *)(iVar7 + 0x1c);
  if (iVar2 == 0) {
    func_0x014909d8(iVar7);
    iVar2 = *(int *)(iVar7 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x0149097c();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x0149097c();
  }
  uVar4 = **(undefined4 **)(iVar2 + 0x5c);
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  uVar3 = **(undefined4 **)(_UNK_02a02a7c + 0x2a02a50);
  pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
  aiStack_24[0] = iVar6;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar3,uVar4,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar2 = func_0x02953fd4(0x226,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar6 + 0x14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x04753c80(iVar2,uVar3,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar6 + 0x14);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x0475399c(iVar2,uVar3,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar6 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f2f10(iVar2,0);
        if (iVar2 == 0) {
          iVar6 = *(int *)(iVar6 + 0x10);
          if (iVar6 == 0) {
            func_0x014388e4();
          }
          iVar6 = func_0x024f2f20(iVar6,200,0);
          if (iVar6 == 0) {
            return 0;
          }
        }
        puStack_34 = &uStack_28;
        puStack_38 = auStack_30;
        piStack_3c = aiStack_24;
        uStack_40 = 0;
        uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        FUN_0298fd74(uVar1,uVar3,uVar4);
        iVar6 = *(int *)(aiStack_24[0] + 0x18);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar6,uVar1,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar1 = 1;
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x226,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = func_0x02871898(iVar2,iVar6,uVar3,uVar4,0);
  }
  return uVar1;
}

