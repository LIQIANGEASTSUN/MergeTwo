
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_032aa964(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_032aac9c + 0x32aa97c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032aaca0 + 0x32aa990));
    func_0x01438628(*(undefined4 *)(_UNK_032aaca4 + 0x32aa99c));
    func_0x01438628(*(undefined4 *)(_UNK_032aaca8 + 0x32aa9a8));
    func_0x01438628(*(undefined4 *)(_UNK_032aacac + 0x32aa9b4));
    func_0x01438628(*(undefined4 *)(_UNK_032aacb0 + 0x32aa9c0));
    func_0x01438628(*(undefined4 *)(_UNK_032aacb4 + 0x32aa9cc));
    func_0x01438628(*(undefined4 *)(_UNK_032aacb8 + 0x32aa9d8));
    func_0x01438628(*(undefined4 *)(_UNK_032aacbc + 0x32aa9e4));
    func_0x01438628(*(undefined4 *)(_UNK_032aacc0 + 0x32aa9f0));
    func_0x01438628(*(undefined4 *)(_UNK_032aacc4 + 0x32aa9fc));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8281,0);
  if (iVar1 == 0) {
    uVar8 = 0;
    if (*(int *)(param_1 + 0x20) == 0 && *(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(**(int **)(_UNK_032aacc8 + 0x32aaa7c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032aaccc + 0x32aaa98));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032aacd0 + 0x32aaab8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 600) == 0) {
        uVar5 = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = func_0x04753840(*(int *)(iVar1 + 600),**(undefined4 **)(_UNK_032aacdc + 0x32aaae8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03e1c764(&uStack_30,iVar1,**(undefined4 **)(_UNK_032aace0 + 0x32aab10));
        bVar7 = true;
        puVar6 = *(undefined4 **)(_UNK_032aace4 + 0x32aab30);
        uVar5 = 0;
        iVar1 = 0;
        while (iVar2 = func_0x048b7494(&uStack_30,*puVar6), iVar2 != 0) {
          if (iStack_24 != 0) {
            uVar3 = *(uint *)(iStack_24 + 0x28);
            iVar2 = *(int *)(iStack_24 + 0x2c);
            if (((int)(iVar1 - (iVar2 + (uint)(uVar5 < uVar3))) < 0 !=
                 (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)(uVar5 < uVar3)))) &&
               (uVar5 = uVar3, iVar1 = iVar2, *(char *)(iStack_24 + 0x40) == '\0')) {
              bVar7 = false;
            }
          }
        }
        func_0x048b7490(&uStack_30,**(undefined4 **)(_UNK_032aace8 + 0x32aab84));
        if (!bVar7) {
          return 0;
        }
      }
      uVar8 = CONCAT44(iVar1,uVar5);
      if (*(int *)(**(int **)(_UNK_032aacd4 + 0x32aabb4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032aacd8 + 0x32aabd0));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x026ffbe0(iVar2,0);
      iVar2 = (int)((ulonglong)uVar9 >> 0x20);
      bVar7 = (uint)uVar9 < uVar5;
      if ((int)(iVar2 - (iVar1 + (uint)bVar7)) < 0 !=
          (SBORROW4(iVar2,iVar1) != SBORROW4(iVar2 - iVar1,(uint)bVar7))) {
        uVar8 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8281,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar8 = func_0x0286a3a0(iVar1,param_1,0);
  }
  return uVar8;
}

