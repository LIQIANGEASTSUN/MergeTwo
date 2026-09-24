
/* WARNING: Possible PIC construction at 0x01c81aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01c81b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01c81b84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c81b68) */
/* WARNING: Removing unreachable block (ram,0x01c81b74) */
/* WARNING: Removing unreachable block (ram,0x01c81b78) */
/* WARNING: Removing unreachable block (ram,0x01c81aa8) */
/* WARNING: Removing unreachable block (ram,0x01c81abc) */
/* WARNING: Removing unreachable block (ram,0x01c81ac0) */
/* WARNING: Removing unreachable block (ram,0x01c81acc) */
/* WARNING: Removing unreachable block (ram,0x01c81ad0) */
/* WARNING: Removing unreachable block (ram,0x01c81aec) */
/* WARNING: Removing unreachable block (ram,0x01c81af0) */
/* WARNING: Removing unreachable block (ram,0x01c81afc) */
/* WARNING: Removing unreachable block (ram,0x01c81b00) */
/* WARNING: Removing unreachable block (ram,0x01c81b88) */
/* WARNING: Removing unreachable block (ram,0x01c81b9c) */
/* WARNING: Removing unreachable block (ram,0x01c81ba0) */
/* WARNING: Removing unreachable block (ram,0x01c81bac) */
/* WARNING: Removing unreachable block (ram,0x01c81bb0) */
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

void FUN_01c81920(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar4 = (char *)(_UNK_01c81bd4 + 0x1c81940);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c81bd8 + 0x1c81958));
    func_0x01438628(*(undefined4 *)(_UNK_01c81bdc + 0x1c81964));
    func_0x01438628(*(undefined4 *)(_UNK_01c81be0 + 0x1c81970));
    func_0x01438628(*(undefined4 *)(_UNK_01c81be4 + 0x1c8197c));
    func_0x01438628(*(undefined4 *)(_UNK_01c81be8 + 0x1c81988));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xad2b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xad2b,0);
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
  iVar2 = func_0x024f0584(iVar2,param_2,**(undefined4 **)(_UNK_01c81bec + 0x1c81a20));
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01c81bf0 + 0x1c81b24));
    func_0x026b0054(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_01c81bf4 + 0x1c81b64);
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
    iVar2 = func_0x03b72148(iVar2,param_2,**(undefined4 **)(_UNK_01c81bfc + 0x1c81a6c));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = **(int **)(_UNK_01c81c00 + 0x1c81aa4);
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

