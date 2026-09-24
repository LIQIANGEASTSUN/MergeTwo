
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3dcbc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02c3e06c + 0x2c3dcdc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3e070 + 0x2c3dcf0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e074 + 0x2c3dcfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e078 + 0x2c3dd08));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e07c + 0x2c3dd14));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e080 + 0x2c3dd20));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e084 + 0x2c3dd2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e088 + 0x2c3dd38));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e08c + 0x2c3dd44));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e090 + 0x2c3dd50));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xe8c,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_02c3e094 + 0x2c3ddc4);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar9 = *(undefined4 **)(_UNK_02c3e098 + 0x2c3dde0);
    iVar1 = func_0x014e9518(*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = 0;
    iVar1 = FUN_02bdf42c(iVar1,param_3,0);
    if (iVar1 != 0) {
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02c3e09c + 0x2c3de1c));
      func_0x024f0510(iVar2,**(undefined4 **)(_UNK_02c3e0a0 + 0x2c3de30));
      if (param_2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef7ac(&uStack_48,param_2,**(undefined4 **)(_UNK_02c3e0a4 + 0x2c3de58));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar3 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_02c3e0a8 + 0x2c3de78)),
            iVar1 = iStack_2c, iVar3 != 0) {
        iVar3 = 0;
        while( true ) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02bdf42c(iVar4,param_3,0);
          if (iVar4 <= iVar3) break;
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02bdf4e4(iVar4,iVar3,param_3,0);
          if (iVar4 != 0) {
            if (iVar1 == *(int *)(iVar4 + 8)) {
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar4 = *(int *)(iVar2 + 8);
              uVar7 = *(uint *)(iVar2 + 0xc);
              piVar5 = *(int **)(_UNK_02c3e0ac + 0x2c3df5c);
              *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
              iVar10 = *piVar5;
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              if (uVar7 < *(uint *)(iVar4 + 0xc)) {
                *(uint *)(iVar2 + 0xc) = uVar7 + 1;
                *(int *)(iVar4 + uVar7 * 4 + 0x10) = iVar3;
              }
              else {
                func_0x024f0520(iVar2,iVar3,
                                *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
              }
            }
          }
          iVar3 = iVar3 + 1;
        }
      }
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3e0b4 + 0x2c3dfb4));
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe8c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02895178(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}

