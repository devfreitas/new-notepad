# Correções do new-notepad

## O que foi ajustado
- Mantida a paleta fixa do aplicativo, independente do tema do Omarchy:
  - Fundo: `#383838`
  - Texto: `#ffffff`
  - Acento: `#666666`
  - Seleção: `#626262`
  - Texto selecionado: `#ffffff`
  - Painéis/blocos de código: `#444444`
- Renomeado `loadOmarchyTheme()` para `applyFixedTheme()` para refletir o comportamento real.
- Removida a função `blend()` que não era mais utilizada.
- Atualizados os testes que ainda esperavam cores e modo claro/escuro vindos do tema do Omarchy.
- Mantidos os testes de parsing TOML e os demais testes de funcionalidades do editor.

## Compilar e testar no Omarchy
Na raiz do projeto:

```bash
./bin/build
./bin/test
./build/omawrite
```

A validação `git diff --check` foi concluída sem erros. A compilação e a suíte Qt não puderam ser executadas neste ambiente de preparação porque as bibliotecas de desenvolvimento Qt6 não estão instaladas; execute os comandos acima no seu Omarchy para confirmar o build e os testes.
