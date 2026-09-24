
/* WARNING: Possible PIC construction at 0x01c7ad20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c7ad24) */
/* WARNING: Removing unreachable block (ram,0x01c7ad38) */
/* WARNING: Removing unreachable block (ram,0x01c7ad3c) */
/* WARNING: Removing unreachable block (ram,0x01c7ad48) */
/* WARNING: Removing unreachable block (ram,0x01c7ad4c) */
/* WARNING: Removing unreachable block (ram,0x01c7ad68) */
/* WARNING: Removing unreachable block (ram,0x01c7ad6c) */
/* WARNING: Removing unreachable block (ram,0x01c7ad78) */
/* WARNING: Removing unreachable block (ram,0x01c7ad7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7aab8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  pcVar7 = (char *)(_UNK_01c7ad94 + 0x1c7aad8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7ad98 + 0x1c7aaec));
    func_0x01438628(*(undefined4 *)(_UNK_01c7ad9c + 0x1c7aaf8));
    func_0x01438628(*(undefined4 *)(_UNK_01c7ada0 + 0x1c7ab04));
    func_0x01438628(*(undefined4 *)(_UNK_01c7ada4 + 0x1c7ab10));
    func_0x01438628(*(undefined4 *)(_UNK_01c7ada8 + 0x1c7ab1c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xad16,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01c733a0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x024f0584(iVar2,param_2,**(undefined4 **)(_UNK_01c7adac + 0x1c7abac));
    if (iVar2 != 0) {
      iVar2 = 0;
      puVar11 = *(undefined4 **)(_UNK_01c7adb0 + 0x1c7abcc);
      puVar12 = *(undefined4 **)(_UNK_01c7adb4 + 0x1c7abd4);
      while( true ) {
        iVar3 = FUN_01c733a0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x4c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b72148(iVar3,param_2,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar2) break;
        iVar3 = FUN_01c733a0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 0x4c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b72148(iVar3,param_2,*puVar11);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x03b7661c(iVar3,iVar2,*puVar12);
        if (iVar3 == param_3) {
          iVar3 = FUN_01c733a0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x4c);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b72148(iVar3,param_2,*puVar11);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 8);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar6 = **(int **)(_UNK_01c7adb8 + 0x1c7ad20);
          pcVar7 = (char *)(_UNK_03b76228 + 0x3b76118);
          if (*pcVar7 == '\0') {
            func_0x024f83cc(*(undefined4 *)(_UNK_03b7622c + 0x3b7612c));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b76230 + 0x3b76138));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b76234 + 0x3b76144));
            *pcVar7 = '\x01';
          }
          iVar9 = **(int **)(_UNK_03b76238 + 0x3b76158);
          iVar5 = *(int *)(iVar9 + 0x1c);
          if (iVar5 == 0) {
            func_0x024f83f8(iVar9);
            iVar5 = *(int *)(iVar9 + 0x1c);
          }
          iVar5 = *(int *)(iVar5 + 8);
          if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = func_0x024f83fc();
          }
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar5 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
          if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
            iVar5 = func_0x024f83fc();
          }
          uVar10 = **(undefined4 **)(iVar5 + 0x5c);
          if (*(int *)(**(int **)(_UNK_03b7623c + 0x3b761b8) + 0x74) == 0) {
            func_0x024f83d8(**(int **)(_UNK_03b7623c + 0x3b761b8));
          }
          func_0x02679550(**(undefined4 **)(_UNK_03b76240 + 0x3b761e8),uVar10,0);
          if (iVar3 == 0) {
            func_0x024f83d4();
          }
          func_0x04cd4428(iVar3,iVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x48));
          pcVar7 = (char *)(_UNK_03b75b8c + 0x3b75a94);
          if (*pcVar7 == '\0') {
            func_0x024f83cc(*(undefined4 *)(_UNK_03b75b90 + 0x3b75aa8),
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x24));
            func_0x024f83cc(*(undefined4 *)(_UNK_03b75b94 + 0x3b75ab4));
            *pcVar7 = '\x01';
          }
          piVar8 = *(int **)(_UNK_03b75b98 + 0x3b75ac8);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x024f83d8();
          }
          puVar11 = *(undefined4 **)(_UNK_03b75b9c + 0x3b75ae4);
          iVar2 = func_0x04e4a028(*puVar11);
          if (iVar2 == 0) {
            func_0x024f83d4();
          }
          uVar4 = *(uint *)(iVar2 + 0x60);
          cVar1 = *(char *)(iVar3 + 0x18);
          *(uint *)(iVar2 + 0x60) = uVar4 + 1;
          *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar4);
          if (cVar1 != '\0') {
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x024f83d8();
            }
            iVar2 = func_0x04e4a028(*puVar11);
            if (iVar2 == 0) {
              func_0x024f83d4();
            }
            *(undefined1 *)(iVar2 + 0x38) = 1;
          }
          if (*(char *)(iVar3 + 0x19) != '\0') {
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x024f83d8();
            }
            iVar2 = func_0x04e4a028(*puVar11);
            if (iVar2 == 0) {
              func_0x024f83d4();
            }
            *(undefined1 *)(iVar2 + 0x39) = 1;
          }
          return;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  else {
    iVar2 = func_0x029540a4(0xad16,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar2,param_1,param_2,param_3,0);
  }
  return;
}

