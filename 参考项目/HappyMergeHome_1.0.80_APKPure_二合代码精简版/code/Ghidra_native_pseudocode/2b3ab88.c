
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4ab88(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
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
  
  pcVar9 = (char *)(_UNK_02b4b090 + 0x2b4aba0);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4b094 + 0x2b4abb4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b098 + 0x2b4abc0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b09c + 0x2b4abcc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0a0 + 0x2b4abd8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0a4 + 0x2b4abe4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0a8 + 0x2b4abf0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0ac + 0x2b4abfc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0b0 + 0x2b4ac08));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0b4 + 0x2b4ac14));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0b8 + 0x2b4ac20));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0bc + 0x2b4ac2c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0c0 + 0x2b4ac38));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0c4 + 0x2b4ac44));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0c8 + 0x2b4ac50));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0cc + 0x2b4ac5c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0d0 + 0x2b4ac68));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0d4 + 0x2b4ac74));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0d8 + 0x2b4ac80));
    func_0x01438628(*(undefined4 *)(_UNK_02b4b0dc + 0x2b4ac8c));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x19e3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4b0e0 + 0x2b4ad04));
    func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02b4b0e4 + 0x2b4ad18));
    if (*(int *)(**(int **)(_UNK_02b4b0e8 + 0x2b4ad2c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b4b0ec + 0x2b4ad48));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_02b4b0f0 + 0x2b4ad68));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x130);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02b4b0f4 + 0x2b4ad9c));
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02b4b0f8 + 0x2b4adb4));
    func_0x024f108c(iVar2,uVar3,**(undefined4 **)(_UNK_02b4b0fc + 0x2b4adc4));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar12 = *(int *)(iVar2 + 0xc) - 1;
    if (-1 < (int)uVar12) {
      puVar11 = *(undefined4 **)(_UNK_02b4b100 + 0x2b4ae00);
      do {
        if (*(int *)(**(int **)(_UNK_02b4b104 + 0x2b4ae08) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02b4b108 + 0x2b4ae24));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x036c7bec(iVar4,**(undefined4 **)(_UNK_02b4b10c + 0x2b4ae44));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x130);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = func_0x0152983c(iVar2,uVar12,**(undefined4 **)(_UNK_02b4b110 + 0x2b4ae80));
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = func_0x03b73d40(iVar4,uVar3,**(undefined4 **)(_UNK_02b4b114 + 0x2b4aea8));
        iVar5 = FUN_02b4aaa8();
        if (iVar5 != 0) {
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = *(int *)(iVar4 + 0x18);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x046c2934(&uStack_58,iVar4,**(undefined4 **)(_UNK_02b4b118 + 0x2b4aef0));
          uStack_40 = uStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          while (iVar4 = func_0x048a44e0(&uStack_40,*puVar11), uVar3 = uStack_34, iVar4 != 0) {
            iVar4 = (int)uStack_30;
            if (0 < (int)uStack_30) {
              uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02b4b11c + 0x2b4af3c));
              func_0x02ca3c70(uVar6,uVar3,iVar4,0,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar1 + 8);
              uVar10 = *(uint *)(iVar1 + 0xc);
              piVar8 = *(int **)(_UNK_02b4b120 + 0x2b4af8c);
              *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
              iVar5 = *piVar8;
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (uVar10 < *(uint *)(iVar4 + 0xc)) {
                *(uint *)(iVar1 + 0xc) = uVar10 + 1;
                puVar7 = (undefined4 *)(iVar4 + uVar10 * 4 + 0x10);
                *puVar7 = uVar6;
                func_0x014385cc(puVar7,uVar6);
              }
              else {
                func_0x0152874c(iVar1,uVar6,
                                *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
              }
            }
          }
          func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02b4b124 + 0x2b4afe8));
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 < 0x80000000);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x19e3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884bcc(iVar1,param_1,0);
  }
  return iVar1;
}

