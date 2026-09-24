
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019f1a78(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined1 *puStack_38;
  undefined4 *puStack_34;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  pcVar5 = (char *)(_UNK_019f1b8c + 0x19f1a88);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f1b90 + 0x19f1a9c));
    func_0x01438628(*(undefined4 *)(_UNK_019f1b94 + 0x19f1aa8));
    func_0x01438628(*(undefined4 *)(_UNK_019f1b98 + 0x19f1ab4));
    func_0x01438628(*(undefined4 *)(_UNK_019f1b9c + 0x19f1ac0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_019f1ba0 + 0x19f1ad4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f1ba4 + 0x19f1af0));
  iVar6 = **(int **)(_UNK_019f1ba8 + 0x19f1b04);
  iVar2 = *(int *)(iVar6 + 0x1c);
  if (iVar2 == 0) {
    func_0x014909d8(iVar6);
    iVar2 = *(int *)(iVar6 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x0149097c();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x0149097c();
  }
  uVar7 = **(undefined4 **)(iVar2 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = **(undefined4 **)(_UNK_019f1bac + 0x19f1b80);
  pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
  aiStack_24[0] = iVar1;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar4,uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar2 = func_0x02953fd4(0x226,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x04753c80(iVar2,uVar4,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar3 = 0;
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar1 + 0x14);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x0475399c(iVar2,uVar4,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f2f10(iVar2,0);
        if (iVar2 == 0) {
          iVar1 = *(int *)(iVar1 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f2f20(iVar1,200,0);
          if (iVar1 == 0) {
            return 0;
          }
        }
        puStack_34 = &uStack_28;
        puStack_38 = auStack_30;
        piStack_3c = aiStack_24;
        uStack_40 = 0;
        uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar3,uVar4,uVar7);
        iVar1 = *(int *)(aiStack_24[0] + 0x18);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar3 = 1;
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x226,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x02871898(iVar2,iVar1,uVar4,uVar7,0);
  }
  return uVar3;
}

