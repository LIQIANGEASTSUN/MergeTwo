
/* WARNING: Possible PIC construction at 0x01c11988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c1198c) */
/* WARNING: Removing unreachable block (ram,0x01c119a4) */
/* WARNING: Removing unreachable block (ram,0x01c119a8) */
/* WARNING: Removing unreachable block (ram,0x01c11a08) */
/* WARNING: Removing unreachable block (ram,0x01c11a0c) */
/* WARNING: Removing unreachable block (ram,0x01c11a68) */
/* WARNING: Removing unreachable block (ram,0x01c11a6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c117fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01c11a8c + 0x1c11824);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c11a90 + 0x1c11848));
    func_0x01438628(*(undefined4 *)(_UNK_01c11a94 + 0x1c11854));
    func_0x01438628(*(undefined4 *)(_UNK_01c11a98 + 0x1c11860));
    func_0x01438628(*(undefined4 *)(_UNK_01c11a9c + 0x1c1186c));
    func_0x01438628(*(undefined4 *)(_UNK_01c11aa0 + 0x1c11878));
    func_0x01438628(*(undefined4 *)(_UNK_01c11aa4 + 0x1c11884));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e2d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e2d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fb9a4(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c11aa8 + 0x1c11908));
  func_0x024eeca8(iVar1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar1 + 0x14) = param_7;
  func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_7);
  piVar2 = *(int **)(_UNK_01c11aac + 0x1c11948);
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x01c11ac8();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&UNK_05d3ec04)(iVar1,1,0);
  return;
}

