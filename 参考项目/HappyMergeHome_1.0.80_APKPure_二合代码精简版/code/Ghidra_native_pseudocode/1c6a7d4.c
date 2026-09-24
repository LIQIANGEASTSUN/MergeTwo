
/* WARNING: Possible PIC construction at 0x01c7a958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01c7aa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01c7aa38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c7aa1c) */
/* WARNING: Removing unreachable block (ram,0x01c7aa28) */
/* WARNING: Removing unreachable block (ram,0x01c7aa2c) */
/* WARNING: Removing unreachable block (ram,0x01c7a95c) */
/* WARNING: Removing unreachable block (ram,0x01c7a970) */
/* WARNING: Removing unreachable block (ram,0x01c7a974) */
/* WARNING: Removing unreachable block (ram,0x01c7a980) */
/* WARNING: Removing unreachable block (ram,0x01c7a984) */
/* WARNING: Removing unreachable block (ram,0x01c7a9a0) */
/* WARNING: Removing unreachable block (ram,0x01c7a9a4) */
/* WARNING: Removing unreachable block (ram,0x01c7a9b0) */
/* WARNING: Removing unreachable block (ram,0x01c7a9b4) */
/* WARNING: Removing unreachable block (ram,0x01c7aa3c) */
/* WARNING: Removing unreachable block (ram,0x01c7aa50) */
/* WARNING: Removing unreachable block (ram,0x01c7aa54) */
/* WARNING: Removing unreachable block (ram,0x01c7aa60) */
/* WARNING: Removing unreachable block (ram,0x01c7aa64) */
/* WARNING: Removing unreachable block (ram,0x03b71e6c) */
/* WARNING: Removing unreachable block (ram,0x03b71e88) */
/* WARNING: Removing unreachable block (ram,0x03b71e8c) */
/* WARNING: Removing unreachable block (ram,0x03b71d4c) */
/* WARNING: Removing unreachable block (ram,0x03b71d68) */
/* WARNING: Removing unreachable block (ram,0x03b71d88) */
/* WARNING: Removing unreachable block (ram,0x03b71da0) */
/* WARNING: Removing unreachable block (ram,0x03b71da4) */
/* WARNING: Removing unreachable block (ram,0x03b71dc0) */
/* WARNING: Removing unreachable block (ram,0x03b71dc4) */
/* WARNING: Removing unreachable block (ram,0x03b71de0) */
/* WARNING: Removing unreachable block (ram,0x03b71df0) */
/* WARNING: Removing unreachable block (ram,0x03b71df4) */
/* WARNING: Removing unreachable block (ram,0x03b71e08) */
/* WARNING: Removing unreachable block (ram,0x03b71e0c) */
/* WARNING: Removing unreachable block (ram,0x03b71e14) */
/* WARNING: Removing unreachable block (ram,0x03b71e20) */
/* WARNING: Removing unreachable block (ram,0x03b71e30) */
/* WARNING: Removing unreachable block (ram,0x03b71e34) */
/* WARNING: Removing unreachable block (ram,0x03b71e48) */
/* WARNING: Removing unreachable block (ram,0x03b71e4c) */
/* WARNING: Removing unreachable block (ram,0x03b71e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c7a7d4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  pcVar4 = (char *)(_UNK_01c7aa88 + 0x1c7a7f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c7aa8c + 0x1c7a80c));
    func_0x01438628(*(undefined4 *)(_UNK_01c7aa90 + 0x1c7a818));
    func_0x01438628(*(undefined4 *)(_UNK_01c7aa94 + 0x1c7a824));
    func_0x01438628(*(undefined4 *)(_UNK_01c7aa98 + 0x1c7a830));
    func_0x01438628(*(undefined4 *)(_UNK_01c7aa9c + 0x1c7a83c));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xad15,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xad15,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028cc20c(iVar2,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar2 = FUN_01c733a0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x024f0584(iVar2,param_2,**(undefined4 **)(_UNK_01c7aaa0 + 0x1c7a8d4));
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01c7aaa4 + 0x1c7a9d8));
    func_0x026b0054(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_01c7aaa8 + 0x1c7aa18);
  }
  else {
    iVar2 = FUN_01c733a0(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x03b72148(iVar2,param_2,**(undefined4 **)(_UNK_01c7aab0 + 0x1c7a920));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_01c7aab4 + 0x1c7a958);
  }
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  iVar8 = *(int *)(iVar2 + 8);
  uVar6 = *(uint *)(iVar2 + 0xc);
  iVar9 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x20);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (iVar8 == 0) {
    func_0x024f83d4();
  }
  if (uVar6 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar6 + 1;
    *(undefined4 *)(iVar8 + uVar6 * 4 + 0x10) = param_3;
  }
  else {
    func_0x04cd29cc(iVar2,param_3,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
  }
  pcVar4 = (char *)(_UNK_03b75b8c + 0x3b75a94);
  if (*pcVar4 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b90 + 0x3b75aa8),
                    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x24));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b75b94 + 0x3b75ab4));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_03b75b98 + 0x3b75ac8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar7 = *(undefined4 **)(_UNK_03b75b9c + 0x3b75ae4);
  iVar3 = func_0x04e4a028(*puVar7);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar6 = *(uint *)(iVar3 + 0x60);
  cVar1 = *(char *)(iVar2 + 0x18);
  *(uint *)(iVar3 + 0x60) = uVar6 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar6);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar3 = func_0x04e4a028(*puVar7);
    if (iVar3 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar3 + 0x38) = 1;
  }
  if (*(char *)(iVar2 + 0x19) != '\0') {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar7);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

