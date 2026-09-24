
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd4b70(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02bd4e34 + 0x2bd4b90);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd4e38 + 0x2bd4ba8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4e3c + 0x2bd4bb4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4e40 + 0x2bd4bc0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4e44 + 0x2bd4bcc));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x02953fd4(0x5cdd,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02bad204(param_1,param_2,param_4);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd4e48 + 0x2bd4c54) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd4e4c + 0x2bd4c70));
      iVar8 = *(int *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029a6fa8(iVar3,iVar8,0);
      iVar3 = 0;
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0x84);
        iVar8 = iVar4;
      }
      if ((iVar4 != 0 && iVar3 != 0) && (iVar3 = func_0x02b53c1c(iVar3,param_3,0), iVar3 != 0)) {
        iVar3 = 4;
        while( true ) {
          iVar4 = *(int *)(iVar8 + 0x84);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(uint *)(iVar4 + 0xc);
          uVar10 = iVar3 - 4;
          if ((int)uVar5 <= (int)uVar10) break;
          iVar9 = *(int *)(iVar8 + 0xac);
          iVar4 = 0;
          if (iVar9 != 0) {
            uVar5 = *(uint *)(iVar9 + 0xc);
          }
          if ((iVar9 != 0 && uVar5 != 0) && ((int)uVar10 < (int)uVar5)) {
            if (uVar5 <= uVar10) {
              func_0x014388e8();
            }
            iVar4 = *(int *)(iVar9 + iVar3 * 4);
          }
          iVar9 = *(int *)(iVar8 + 0x84);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar10) {
            func_0x014388e8();
          }
          if ((0 < iVar4) && (*(int *)(iVar9 + iVar3 * 4) != param_3)) {
            iVar4 = *(int *)(iVar8 + 0x84);
            iVar9 = *(int *)(iVar2 + 0x68);
            iStack_28 = 0;
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar4 + 0xc) <= uVar10) {
              func_0x014388e8();
            }
            uVar7 = *(undefined4 *)(iVar4 + iVar3 * 4);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x046c3f38(iVar9,uVar7,&iStack_28,**(undefined4 **)(_UNK_02bd4e50 + 0x2bd4d88));
            iVar4 = *(int *)(iVar8 + 0x84);
            iVar9 = *(int *)(iVar2 + 0x68);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar4 + 0xc) <= uVar10) {
              func_0x014388e8();
            }
            iVar1 = iStack_28;
            uVar7 = *(undefined4 *)(iVar4 + iVar3 * 4);
            if (iVar9 == 0) {
              func_0x014388e4();
            }
            func_0x03b70fe4(iVar9,uVar7,iVar1 + 1,**(undefined4 **)(_UNK_02bd4e54 + 0x2bd4ddc));
          }
          iVar3 = iVar3 + 1;
        }
        iVar2 = *(int *)(iVar2 + 0x68);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b70fe4(iVar2,param_3,0,**(undefined4 **)(_UNK_02bd4e58 + 0x2bd4e28));
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0x5cdd,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}

