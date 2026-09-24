
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031ec0cc(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
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
  
  pcVar5 = (char *)(_UNK_031ec1e0 + 0x31ec0dc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031ec1e4 + 0x31ec0f0));
    func_0x01438628(*(undefined4 *)(_UNK_031ec1e8 + 0x31ec0fc));
    func_0x01438628(*(undefined4 *)(_UNK_031ec1ec + 0x31ec108));
    func_0x01438628(*(undefined4 *)(_UNK_031ec1f0 + 0x31ec114));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_031ec1f4 + 0x31ec128) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_031ec1f8 + 0x31ec144));
  iVar6 = **(int **)(_UNK_031ec1fc + 0x31ec158);
  iVar3 = *(int *)(iVar6 + 0x1c);
  if (iVar3 == 0) {
    func_0x014909d8(iVar6);
    iVar3 = *(int *)(iVar6 + 0x1c);
  }
  iVar3 = *(int *)(iVar3 + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x0149097c();
  }
  uVar7 = **(undefined4 **)(iVar3 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = **(undefined4 **)(_UNK_031ec200 + 0x31ec1d4);
  pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
  aiStack_24[0] = iVar2;
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar4,uVar7,0);
    func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
    func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
    func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = func_0x02953fd4(0x226,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(iVar2 + 0x14);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar3,uVar4,**(undefined4 **)(_UNK_02990404 + 0x2990298));
    uVar1 = 0;
    if (iVar3 != 0) {
      iVar3 = *(int *)(iVar2 + 0x14);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x0475399c(iVar3,uVar4,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar2 + 0x10);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024f2f10(iVar3,0);
        if (iVar3 == 0) {
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
        puStack_38 = auStack_30;
        piStack_3c = aiStack_24;
        uStack_40 = 0;
        uVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
        func_0x0298fd74(uVar1,uVar4,uVar7);
        iVar2 = *(int *)(aiStack_24[0] + 0x18);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03a39760(iVar2,uVar1,**(undefined4 **)(_UNK_02990410 + 0x299038c));
        func_0x010b8c68(&uStack_40);
        uVar1 = 1;
      }
    }
  }
  else {
    iVar3 = func_0x029540a4(0x226,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar1 = func_0x02871898(iVar3,iVar2,uVar4,uVar7,0);
  }
  return uVar1;
}

